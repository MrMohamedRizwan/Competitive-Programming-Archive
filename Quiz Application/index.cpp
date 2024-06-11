#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Admin{
    public:
        int questionId;
        string question;
        static unordered_map<string,vector<int>> Difficulty;
        vector<string>Ques;
        vector<string> answer;
        vector<vector<string>>Options;
        void setQuestion(int difficulty,int questionId,string question,vector<string>options,string ans)
        {
            this->questionId=questionId;
            if(difficulty==1)
            {
                Difficulty["Easy"].push_back(questionId);
            }
            else if(difficulty==2)
            Difficulty["Medium"].push_back(questionId);
            else if(difficulty==3)
            Difficulty["Hard"].push_back(questionId);


            //Storing Questions 
            Ques[questionId]=question;
            // Storing Options
            for(int i=1;i<=4;i++)
            Options[questionId][i]=options[i];
            // Storing Answer
            answer[questionId]=ans;
        }
        void deleteQuestion(int id)
        {
            int f=false;
            for(auto [d,qi]:Difficulty)
            {
                for(int i=0;i<qi.size();i++)
                {
                    if(qi[i]==id)
                    {
                        // remove
                    }
                }
            }
            if(f)
            cout<<"No Questions With that Id Found";
        }
        void viewAllQuestions()
        {
            cout<<"Questions \n";
            for(int i=0;i<Ques.size();i++)
            {
                cout<<i<<")"<<Ques[i]<<endl;
            }
        }
        vector<int> totalQuestions()
        {
            vector<int> ans;
            int sum=0;
            for(auto it:Difficulty)
            {
                ans.push_back(it.second.size());
                ans.push_back(it.second.size());
                ans.push_back(it.second.size());
                sum+=it.second.size();
            }
            ans.push_back(sum);
            
            return ans;
        }
        
    // Admin()

};
class Teacher : public Admin {
    public:
    int testId=0;
    vector<int>QuestionsForTest;
    void setval(int numberOfQuestions,vector<int>difficulty)
    {
        vector<int>total=totalQuestions();
        if(!(total[total.size()-1]<numberOfQuestions))
        {
            if(!(total[1]<difficulty[1]&&total[2]<difficulty[2]&&total[3]<difficulty[3]))
            {
                for(int i=0;i<numberOfQuestions;i++)
                {
                    
                }
            }
            else
            {
                cout<<"Add more questions ";
            }
        }
        else
        {
            cout<<"Add more questions ";
        }
    }
    void displayResult()
    {

    }

};
class Student{

};
class mainclass{
    public:
    void admin()
    {
        bool val=true;
        cout<<"What Operations would You like to do\n1.Add Questions\n2.Delete Questions\n3. View all questions";
            int questionId=1;
        while(val)
        {    
            int choice;
            cin>>choice;
            string qu;
            vector<string> op;
            int difficulty;
            string ans;
            Admin admin;
            switch(choice)
            {
                case 1:
                questionId++;
                // 1 easy 2 medium 3 hard
                difficulty=1;
                qu="What is this";
                op[1]="A";
                op[2]="B";
                op[3]="C";
                op[4]="D";
                ans="B";
                admin.setQuestion(difficulty,questionId,qu,op,ans);
                break;
                // readTextFile();

                // get inputs From user
                case 2:
                // delete Operation
                cout<<"Enter Question Number";
                int qid;
                cin>>qid;
                admin.deleteQuestion(qid);
                break;
                case 3:
                // display all questions
                cout<<"All questions";
                admin.viewAllQuestions();
                break;
                case 4:
                cout<<"Exit";
                val=false;
                break;
                default:
                cout<<"Enter correct Option";
                break;
            }
        }
    }
    void teacher()
    {
        int numberofquestions=10;
        vector<int>difficulty={5,3,2};
        Teacher t;
        t.setval(numberofquestions,difficulty);

    }
    void student()
    {
        cout<<"Student";

    }

};
bool check(string x,string y)
{
    int n=x.size()-1;
    if(x[n-1]=='a')
    {
        if(y=="123")
        return 1;
        return -1;
    }
    else if(x[n-1]=='t')
    {
        if(y=="123")
        return 2;
        return -1;
    }
    else if(x[n-1]=='s')
    {
        if(y=="123")
        return 3;
        return -1;
    }
    
    return -1;
}
int main()
{
    bool val=true;
    while(val)
    {
        // cout<<"Select User\n1.Admin\n2.Teacher\n3.Student\n4.Exit";
        cout<<"Enter Username and Password\n";
        string UserName;
        string Password;
        cin>>UserName;
        cin>>Password;

        // check username and password
        int choice=check(UserName,Password);
        
        switch(choice)
        {
            case 1:
            mainclass a;
            a.admin();
            break;
            
            case 2:
            mainclass b;
            b.teacher();
            break;

            case 3:
            mainclass c;
            c.student();
            break;

            case 4:
            cout<<"ThankYou";
            val=false;
            break;

            default:
            cout<<"Username and password mismatch\n";
            break;
        }
    
    }

    return 0;
}
