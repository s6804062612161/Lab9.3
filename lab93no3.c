#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	char inputlogin[64];
	char inputpass[64];	
	printf("Login : ");
	scanf("%s",inputlogin);
	printf("Password : ");
	scanf("%s",inputpass);
	
	int i;
	int found = 0;
	for (i=0;i<5;i++){
		if(checkLogin(inputlogin, inputpass, login[i], password[i])){
			found = 1;
			break;			
		}
	}
	
	if(found)
		printf("Welcome\n");
	else
		printf("Incorrect login or password\n");
		
	return 0;
}

int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
	if(strcmp(login, logindb) == 0 && strcmp(passwd, passdb) == 0)
		return 1;
	else
		return 0;
}

