//Written by itsKrish01
//If you find any error or mistake in this code, then please contact me.

#include <iostream>


using namespace std;

int main() {

  string login;
  int register1;
  string user;
  int login_times;
  string password_login;
  string password;
  
  string command;

  cout << "exit/login/register"<<endl<<"Command: ";
  cin >> command;

  while(command != "exit"){

    if(command == "register"){
      cout << "\n\n"<<endl;
      cout << "Registeration"<<endl<<"----------------"<<endl;
      cout <<"regsiter: ";
      cin >> user;
      cout <<"password: ";
      cin >> password; 

      cout << "\n\n";
      cout << "Registered Successfully!"<<endl;
      cout << "\n\n";
      cout << "exit/login/register"<<endl<<"Command: ";


      cin >> command;

      login_times = 3;
      while(login_times > 0){
        

        cout << "\n\n";
        cout << "Login"<<endl<<"_____";
        cout << "\n";

        cout << "login: ";
        cin >> login;
        cout << "Password: ";
        cin >> password_login;

        

        

        if(login == user && password_login == password){
          cout << "loged in Successfully!"<<endl;
          cout << "you have exited from this code."<<endl<<"Run the code again to repeat this.";
          break;

        }
        else if(login != user && password_login == password){

          cout << "username is incorrect!"<<endl;
          login_times--;
          
        }

        else if(login == user && password_login != password){

          cout << "password is incorrect!"<<endl;
          login_times--;
          
        }
        else{
          cout << "Everything is incorrect!"<<endl;
          login_times--;
        }

        

        


      }
      cout << "you have entered wrong details for more than 3 times, So we have blocked your account!";
      break;
    }

  }

}
