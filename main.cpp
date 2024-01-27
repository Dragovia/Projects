#include "Filesys.h"
#include "Sdisk.h"
#include "Shell.h"
#include "Table.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    Shell shell("disk1",256,128);
Table table("disk1", 256, 128, "flatFile", "indexFile");
    //Build the table
    table.Build_Table("data.txt");

 //This main program inputs commands to the shell.
 //It inputs commands as : command op1 op2
 //You should modify it to work for your implementation.
 //
 string s;
 string command="go";
 string op1,op2;

 while (command != "quit")
     {
       command.clear();
       op1.clear();
       op2.clear();
       cout << "$";
       getline(cin,s);
       int firstblank=s.find(' ');
       if (firstblank < s.length()) s[firstblank]='#';
       int secondblank=s.find(' ');
       command=s.substr(0,firstblank);
       if (firstblank < s.length())
         op1=s.substr(firstblank+1,secondblank-firstblank-1);
       if (secondblank < s.length())
         op2=s.substr(secondblank+1);
       if (command=="dir")
          {
            cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;




            // use the ls function
           }
       if (command=="add")
          {
            cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;

            // The variable op1 is the new file
           }
       if (command=="del")
          {
              cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;

            // The variable op1 is the file
           }
       if (command=="type")
          {
              cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;

            // The variable op1 is the file
           }
       if (command=="copy")
          {
              cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;

            // The variable op1 is the source file and the variable op2 is the destination file.
           }
       if (command=="search")
          {
              cout << "The commands for this project are not functional. I did follow the whole course and got almost everything to work"<<endl;
            cout << "All functions work, the data file is read and the files are created, but there is an issue with my inheritance methods" <<endl;
            cout << " I  have provided screenshots in this folder to show my output, I finished 90 of the project and would finish the rest" <<endl;
            cout <<" if my functions showed in the scope of the main file."<<endl;


            // This is the command for Project 4
            // The variable op1 is the date
           }

      }

 return 0;

}


/*
	Sdisk disk1("disk1",256,128);
  Filesys fsys("disk1",256,128);
  fsys.newfile("file1");
  fsys.newfile("file2");

  string bfile1;
  string bfile2;

  for (int i=1; i<1024; i++)
     {
       bfile1+="1";
     }

  vector<string> blocks = fsys.block(bfile1,128);


  int blocknumber=0;

  for (int i=0; i< blocks.size(); i++)
     {
       blocknumber=fsys.addblock("file1",blocks[i]);
     }

  fsys.delblock("file1",fsys.getfirstblock("file1"));

  for (int i=1; i<2048; i++)
     {
       bfile2+="2";
     }

  blocks= fsys.block(bfile2,128);

  for (int i=0; i< blocks.size(); i++)
     {
       blocknumber=fsys.addblock("file2",blocks[i]);
     }

   fsys.delblock("file2",blocknumber);


 	return 0;
 	*/

