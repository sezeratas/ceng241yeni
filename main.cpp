#include "pet.h"
//#include "Classes.h"
#include "mainF.h"
//#include <conio.h>
//#include <tchar.h>
//#include <sal.h>
#include <vector>



using namespace std;


int main()
{
    vector<Adds*>* addv{};

    AddAdds(addv);
    Show(*addv);
    /*SQLRETURN retCode = 0;
    SQLHANDLE SQLStatementHandle = NULL;
    HENV henv = NULL;
    HDBC hdbc = NULL;

    retCode = SQLAllocHandle(SQL_HANDLE_ENV, NULL, &henv);

    retCode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION,
        (void*)SQL_OV_ODBC3, 0);

    retCode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);
    std::wstring odbcname = L"DSN=dbtest1;";

    retCode = SQLDriverConnect(hdbc,
        GetDesktopWindow(),
        (SQLWCHAR*)odbcname.c_str(),
        SQL_NTS,
        NULL,
        0,
        NULL,
        SQL_DRIVER_COMPLETE);

    retCode = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &SQLStatementHandle);

    Pet pet1("kedi", "disi", 4, "izmir", "vahsi");
    Pet pet2("köpek", "erkek", 6, "izst", "sakin");
    pet1.petAdd(SQLStatementHandle);
    pet2.petAdd(SQLStatementHandle);

    int mainchoice;
    do {
        mainScreen();
        cin >> mainchoice;

        switch (mainchoice) {

        case 1: {
            ShowAdds();
            break;
        }
        case 2:
            Find();
            break;
        case 3:
            //AddAdds();
            break;
        case 4:
            EditAdds();
        case 5:
            return 1;
        default:
            cout << "Invalid choice.Please choose 1-5.";
        }

    } while (mainchoice != 5);
   
    SQLFreeHandle(SQL_HANDLE_STMT, SQLStatementHandle);

    SQLDisconnect(hdbc);

    SQLFreeHandle(SQL_HANDLE_DBC, hdbc);

    SQLFreeHandle(SQL_HANDLE_ENV, henv);*/


    return 0;
}