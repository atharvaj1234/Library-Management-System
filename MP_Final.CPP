#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//-***---***---***---Structure----***---***---***-
class lib
{
public:
  int sr;
  char name[20];
  char lname[20];
  char bname[50];
  char bno[10];
  char cardno[10];
  char price[10];
};

lib s[100];
//----------------Function Declaration------------------------
void display();
void search();
void del();
void head();
void add();
void about();
void header();
//------------------------void main----------------------------
int main()
{
  head();
  return 0;
}
//***************************functions*********************************
//---------Function add-----------
void add()
{
  int z;
  system("cls");
  for (z = 0; z < 100; z++)
  {
    if (s[z].sr == 0)
    {
      cout << "\n---------------------------- Enter details ---------------------------" << endl;
      cout << " \n                   First & Last name : ";
      fflush(stdin);
      scanf("%s %s", s[z].name, s[z].lname);
      cout << " \n                   Enter Card Number (4 digits) : ";
      fflush(stdin);
      scanf("%s", s[z].cardno);
      cout << " \n                   Enter  Book  Name : ";
      fflush(stdin);
      gets(s[z].bname);
      cout << " \n                   Enter Book Number (6 digits) : ";
      fflush(stdin);
      scanf("%s", s[z].bno);
      cout << " \n                   Enter Book Price  : ";
      fflush(stdin);
      scanf("%s", s[z].price);
      (s[z].sr) = (z + 1);
      cout << "\n           |                     ENTERY SAVED                 |       " << endl;
      cout << "*======================================================================*" << endl;
      cout << "\n                          Press Enter to Go back " << endl;
      getch();
      head();
    }
  }
}
//--------------------function head----------------------
void head()
{
  int choice;
  system("cls");
  header();
  cout << "*==========================================================================*" << endl;
  cout << "\n             |              1   :  DISPLAY ENTRIES                |       " << endl;
  cout << "\n             |              2   :  SEARCH ENTRIES                 |       " << endl;
  cout << "\n             |              3   :  ADD ENTRIES                    |       " << endl;
  cout << "\n             |              4   :  DELETE ENTRIES                 |       " << endl;
  cout << "\n             |              5   :  ABOUT PROJECT                  |       " << endl;
  cout << "\n             |              6   :  EXIT                           |       " << endl;
  cout << "\n----------------------------------------------------------------------------";
  cout << " \n                            Enter The Choice : ";
  fflush(stdin);
  scanf("%d", &choice);
  system("cls");
  switch (choice)
  {
  case 1:
    display();
    break;
  case 2:
    search();
    break;
  case 3:
    add();
    break;
  case 4:
    del();
    break;
  case 5:
    about();
    break;
  case 6:
    cout << "\n Exit";
    exit(0);
    break;
  default:
    cout << "Wrong Input!! Try Again.";
    head();
    break;
  }
}
//---------------------function display--------------------------
void display()
{
  int j;
  system("cls");
  header();
  cout << "*==========================================================================*" << endl;
  cout << " \n            |                     DISPLAY ENTRIES                |       " << endl;
  cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
  for (j = 0; j < 100; j++)
  {
    if (s[j].sr != 0)
    {
      printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[j].sr, s[j].name, s[j].lname, s[j].bname, s[j].cardno, s[j].bno, s[j].price);
    }
  }
  cout << "\n\n*========================================================================*";
  cout << " \n                              Press Enter to Go back ";
  getch();
  head();
}
//-------------------function search---------------------
void search()
{
  int choice1, i, detail1, detail2, detail3;
  char g[50];
  system("cls");
  header();
  cout << "*==========================================================================*" << endl;
  cout << "\n        |              1   :  GLOBAL SEARCH                         |       ";
  cout << "\n        |              2   :  Search by SERIAL NUMBER               |       ";
  cout << "\n        |              3   :  Search by BOOK NUMBER                 |       ";
  cout << "\n        |              4   :  Search by CARD NUMBER                 |       ";
  cout << "\n        |              5   :  Search by CLIENT NAME                 |       ";
  cout << "\n        |              6   :  Search by PRICE                       |       ";
  cout << "\n        |              7   :  BACK                                  |     " << endl;
  cout << "\n----------------------------------------------------------------------------";
  cout << " \n                         Enter The Choice : ";
  fflush(stdin);
  scanf("%d", &choice1);
  system("cls");
  switch (choice1)
  {
  case 1:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n      |                     GLOBAL SEARCH                  | " << endl;
    cout << "\n                              Search : ";
    scanf("%s", g);
    cout << "" << endl;
    cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
    for (i = 0; i < 100; i++)
    {
      if ((strcmpi((s[i].name), g) == 0) || (strcmpi((s[i].lname), g) == 0) || (strcmpi((s[i].lname), g) == 0) || (strcmpi((s[i].bno), g) == 0) || (strcmpi((s[i].cardno), g) == 0) || (strcmpi((s[i].price), g) == 0))
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name, s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << "\n                     Press Enter to Go back ";
    break;

  case 2:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n       |                Search by SERIAL NUMBER             |" << endl;
    cout << "\n                                Search : ";
    fflush(stdin);
    scanf("%d", &detail1);
    cout << "" << endl;
    cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
    for (i = 0; i < 100; i++)
    {
      if ((s[i].sr) == detail1)
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name,
               s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << " \n                    Press Enter to Go back ";
    break;

  case 3:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n       |                  Search by BOOK NUMBER             |" << endl;
    cout << "\n                                Search : ";
    scanf("%s", g);
    cout << "" << endl;
    cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
    for (i = 0; i < 100; i++)
    {
      if (strcmpi((s[i].bno), g) == 0)
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name,
               s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << " \n                   Press Enter to Go back ";
    break;

  case 4:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n       |                  Search by CARD NUMBER             |" << endl;
    cout << "\n                                Search : ";
    scanf("%s", g);
    cout << "" << endl;
    cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
    for (i = 0; i < 100; i++)
    {
      if (strcmpi((s[i].cardno), g) == 0)
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name,
               s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << " \n                 Press Enter to Go back ";
    break;

  case 5:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n       |                  Search by CLIENT NAME             |" << endl;
    cout << "\n                                Search : ";
    fflush(stdin);
    scanf("%s", g);
    for (i = 0; i < 100; i++)
    {
      if ((strcmpi((s[i].name), g) == 0) || (strcmpi((s[i].lname), g) == 0))
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name,
               s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << " \n                    Press Enter to Go back ";
    break;

  case 6:
    header();
    cout << "*=============================================================*" << endl;
    cout << "\n       |                     Search by PRICE                |" << endl;
    cout << "\n                                Search : ";
    fflush(stdin);
    scanf("%d-%d", &detail1, &detail2);
    cout << "" << endl;
    cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
    for (i = 0; i < 100; i++)
    {
      detail3 = atoi(s[i].price);
      if ((detail3 >= detail1) && (detail3 <= detail2))
      {
        printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[i].sr, s[i].name,
               s[i].lname, s[i].bname, s[i].cardno, s[i].bno, s[i].price);
      }
    }
    cout << "\n\n*===========================================================*";
    cout << " \n                     Press Enter to Go back ";
    break;
  case 7:
    head();
    break;
  default:
    cout << "Wrong Input!! Try Again";
    search();
    break;
  }
  getch();
  head();
}
//-------------------function delete------------------
void del()
{
  int pos, lar, d, i, m, j;
  char a;
  system("cls");
  header();
  cout << "*==========================================================================*" << endl;
  cout << "\n              |                     DELETE ENTRIES                |       " << endl;
  cout << "\nSrno. Name\t\tBook Name\tBook Number\tCard Number\tPrice" << endl;
  for (j = 0; j < 100; j++)
  {
    if (s[j].sr != 0)
    {
      printf("\n %d    %s %s\t%s\t  %s\t\t %s\t\t%s", s[j].sr, s[j].name, s[j].lname,
             s[j].bname, s[j].cardno, s[j].bno, s[j].price);
    }
  }
  cout << "\n\n                        Enter Serial Number to Delete : ";
  fflush(stdin);
  scanf("%d", &pos);
  for (m = 0; m < 100; m++)
  {
    (((s[0].sr) < (s[m].sr))) ? (lar = s[m].sr) : (a = '0');
  }
  if (pos <= lar)
  {
    cout << "\nDo you want to delete the following entry: ";
    printf("\n || %d    %s %s\t%s\t  %s\t\t %s\t\t%s ||\n yes(Y) or no(N): ", s[pos - 1].sr,
           s[pos - 1].name, s[pos - 1].lname, s[pos - 1].bname, s[pos - 1].cardno, s[pos - 1].bno,
           s[pos - 1].price);
    fflush(stdin);
    scanf("%c", &a);
    if (a == 'y' || a == 'Y')
    {
      for (i = (pos - 1); i < 100; i++)
      {
        s[i] = s[i + 1];
        if (s[i].sr != 0)
          s[i].sr = ((s[i + 1].sr) - 1);
        if (i >= lar - 1)
          s[i].sr = 0;
      }
      cout << " \n              |                     Entry Deleted                  |";
    }
  }
  else
    cout << " \n                             Deletion is Not Possible";
  cout << "\n\n*========================================================================*";
  cout << " \n                              Press Enter to Go back ";
  getch();
  head();
}

//-----------function About-----------------------
void about()
{
  cout << "\n\n                       LIBRARY MANAGEMENT SYSTEM!               " << endl;
  cout << "*===========================================================================*";
  cout << "\n \n      |                ABOUT THIS MICROPROJECT             |       " << endl;
  cout << "|------------------------------------------------------------------------|" << endl;
  cout << "|   My group's sincere efforts have made us to accomplish the task of    |" << endl;
  cout << "|   completing this project. However, it would not have been possible    |" << endl;
  cout << "|          without the kind support and help of many individuals.        |" << endl;
  cout << "|                                                                        |" << endl;
  cout << "|     The Library Management System is a project developed in the        |" << endl;
  cout << "|C programming language as a part of our college curriculum. The system  |" << endl;
  cout << "| provides a user-friendly interface to manage the various functions of  |" << endl;
  cout << "| a library, including adding, deleting, displaying and searching for    |" << endl;
  cout << "|                            books borrowed.                             |" << endl;
  cout << "|                                                                        |" << endl;
  cout << "|Overall, the Library Management System is an efficient tool for managing|" << endl;
  cout << "| the daily operations of a library, and provides a seamless experience  |" << endl;
  cout << "|             for both the librarian and the library users.              |" << endl;
  cout << "|------------------------------------------------------------------------|" << endl;
  getch();
  head();
}
//-------------Function Header-------------
void header()
{
  cout << "\n\n    _____________________________________________________________________";
  cout << "\n    |                                                                    |";
  cout << "\n    |                      LIBRARY MANAGEMENT SYSTEM                     |";
  cout << "\n    |____________________________________________________________________|" << endl;
  return;
}