#include <stdio.h>  // for printf
#include <SQLAPI.h> // main SQLAPI++ header

int main(int argc, char* argv[]) {
    SAConnection con;
    
    try {
        con.Connect(_TSA("my_db"), _TSA("my_user"), _TSA("my_password"), SA_Oracle_Client);
        printf("We are connected!\n");

        /*
        The rest of the tutorial goes here!
        */
        
        con.Disconnect();
        printf("We are disconnected!\n");
    }
    catch(SAException &x) {
        con.Rollback();
        printf("%s\n", x.ErrText().GetMultiByteChars());
    }
    
    return 0;
}



