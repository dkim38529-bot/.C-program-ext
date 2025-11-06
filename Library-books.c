/*
Name: Derrick Mathenge
Regno:CT100/26181/25
Description:Library_books
*/

#include<stdio.h>

int main(){
char book [100];

printf("Enter book title:");
scanf("%[^\n]",&book);


FILE * fp;
// create a file
fp = fopen("C:\\Users\\admin\\OneDrive\\borrowed_books.txt","w")

// error checking
if( fp == NULL){
	printf("unable to open the file. /n");
	return 1;
}

int success = fprintf(fp,"\n %s",book);

if (success > 0){
	printf("Book added to data base successfully ./n");
}
else{
	printf("Book addition was unsuccessfull");
	
}
// closing the file
fclose(fp);

return 0;
}




