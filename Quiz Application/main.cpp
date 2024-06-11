#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Admin {
public:
    int questionId;
    string question;
    static unordered_map<string, vector<int>> Difficulty;
    vector<string> Ques;
    vector<string> answer;
    vector<vector<string>> Options;

    Admin() 
    {
        Ques.resize(100);
        answer.resize(100);
        Options.resize(100, vector<string>(5));
    }

    void setQuestion(int difficulty, int questionId, string question, vector<string> options, string ans) \
    {
        this->questionId = questionId;
        if (difficulty == 1) {
            Difficulty["Easy"].push_back(questionId);
        } else if (difficulty == 2) {
            Difficulty["Medium"].push_back(questionId);
        } else if (difficulty == 3) {
            Difficulty["Hard"].push_back(questionId);
        }

        // Storing Questions
        Ques[questionId] = question;
        // Storing Options
        for (int i = 0; i < 4; i++) {
            Options[questionId][i + 1] = options[i];
        }
        // Storing Answer
        answer[questionId] = ans;
    }

    void deleteQuestion(int id) 
    {
        bool found = false;
        for (auto& [d, qi] : Difficulty) {
            for (auto it = qi.begin(); it != qi.end(); ++it) {
                if (*it == id) {
                    qi.erase(it);
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "No Questions With that Id Found" << endl;
        }
    }

    void viewAllQuestions() 
    {
        cout << "Questions: \n";
        for (int i = 0; i < Ques.size(); i++) {
            if (!Ques[i].empty()) {
                cout << i << ") " << Ques[i] << endl;
            }
        }
    }

    vector<int> totalQuestions() 
    {
        vector<int> ans;
        int sum = 0;
        for (auto& it : Difficulty) {
            ans.push_back(it.second.size());
            sum += it.second.size();
        }
        ans.push_back(sum);
        return ans;
    }
};

unordered_map<string, vector<int>> Admin::Difficulty;

class Teacher : public Admin 
{
public:
    int testId = 0;
    vector<int> QuestionsForTest;

    void setval(int numberOfQuestions, vector<int> difficulty) {
        vector<int> total = totalQuestions();
        if (total.back() >= numberOfQuestions) {
            if (total[0] >= difficulty[0] && total[1] >= difficulty[1] && total[2] >= difficulty[2]) {
                // 

            } else {
                cout << "Add more questions." << endl;
            }
        } else {
            cout << "Add more questions." << endl;
        }
    }

    void displayResult() 
    {
        // Implement result display logic
    }
};

class Student 
{
    // Implement Student class
};

class MainClass {
public:
    void admin() {
        bool val = true;
        cout << "What Operations would You like to do\n1. Add Questions\n2. Delete Questions\n3. View all questions\n4. Exit" << endl;
        int questionId = 1;
        Admin admin;

        while (val) {
            int choice;
            cin >> choice;
            string qu;
            vector<string> op(4);
            int difficulty;
            string ans;

            switch (choice) 
            {
                case 1:
                    questionId++;
            
                    difficulty = 1;
                    qu = "What is this?";
                    op = {"A", "B", "C", "D"};
                    ans = "B";
                    admin.setQuestion(difficulty, questionId, qu, op, ans);
                    break;
                case 2:
                    cout << "Enter Question Number: ";
                    int qid;
                    cin >> qid;
                    admin.deleteQuestion(qid);
                    break;
                case 3:
                    admin.viewAllQuestions();
                    break;
                case 4:
                    cout << "Exit" << endl;
                    val = false;
                    break;
                default:
                    cout << "Enter correct Option" << endl;
                    break;
            }
        }
    }

    void teacher() {
        int numberofquestions = 10;
        vector<int> difficulty = {5, 3, 2};
        Teacher t;
        t.setval(numberofquestions, difficulty);
    }

    void student() {
        cout << "Student" << endl;
    }
};

bool check(string x, string y) {
    int n = x.size() - 1;
    if (x[n] == 'a') {
        return y == "123" ? 1 : -1;
    } else if (x[n] == 't') {
        return y == "123" ? 2 : -1;
    } else if (x[n] == 's') {
        return y == "123" ? 3 : -1;
    }
    return -1;
}

int main() {
    bool val = true;
    while (val) {
        cout << "Enter Username and Password: " << endl;
        string UserName;
        string Password;
        cin >> UserName;
        cin >> Password;

        int choice = check(UserName, Password);

        switch (choice) {
            case 1: {
                MainClass a;
                a.admin();
                break;
            }
            case 2: {
                MainClass b;
                b.teacher();
                break;
            }
            case 3: {
                MainClass c;
                c.student();
                break;
            }
            case 4:
                cout << "Thank you" << endl;
                val = false;
                break;
            default:
                cout << "Username and password mismatch" << endl;
                break;
        }
    }

    return 0;
}

