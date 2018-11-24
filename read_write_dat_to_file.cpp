
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    string name1;
    string name2;
    int rollno;
    string branch;
    int rollno1;
    string branch1;
    ofstream ofs("mytxt");
    ifstream ifs("mytxt");
    
    
    name = "uttam";
    rollno = 19;
    branch = "eee";
    
    //writing data to a file..
    
    ofs<< "hello" << endl;
    ofs<< name << endl;
    ofs<< rollno << endl;
    ofs<< branch << endl;
    ofs.close();
    
    // reading data from file..
    if(ifs.is_open())
       std::cout << "file found" << std::endl;
    
    ifs>>name1 >> name2 >> rollno1 >> branch1;
    cout << name1 <<endl << name2<<endl << rollno1 << endl << branch1 << endl;
    
    return 0;
}

