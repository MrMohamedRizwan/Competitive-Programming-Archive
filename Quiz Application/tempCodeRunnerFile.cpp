while (val) {
        cout << "Enter Username and Password: " << endl;
        string UserName;
        string Password;
        cin >> UserName;
        cin >> Password;

        int choice = check(UserName, Password);

        switch (choice) {
            case 