#include <iostream>

using namespace std;

 struct employee{

        string name;

        string lastName;

        double startTime;

        double finishTime;

        double calculateTime(){

        return (finishTime-startTime);

        }


    }emp[5];
int main()
{
    int employeeNumber;
        cout<<"---------------------------employee's information-----------------------"<<endl;
        for(int i=0 ; i<5 ;i++){
            cout<<"name: "<<endl;
            cin>>emp[i].name;
            cout<<"last name: "<<endl;
            cin>>emp[i].lastName;
            cout<<"when did you start to work? "<<endl;
            cin>>emp[i].startTime;
            cout<<"when did you finish your job? "<<endl;
            cin>>emp[i].finishTime;
        }
        cout<<endl;
        cout<<"for show information of employee please enter his number. "<<endl;
        cin>>employeeNumber;
        cout<<"name : "<<emp[employeeNumber].name<<endl;
        cout<<"last name : "<<emp[employeeNumber].lastName<<endl;
        cout<<"time on office : "<<emp[employeeNumber].calculateTime()<<" h"<<endl;

    return 0;
}
