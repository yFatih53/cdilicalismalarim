/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct user{
      char username[20];
      char passwd[20];
};
void kayitol(){
      struct user user1;
      printf("Kayit Paneli\n\n\n");
      printf("Kullanici adi:");scanf("%s",user1.username);
      printf("password :");scanf("%s",user1.passwd);
      FILE *fptr;
      fptr = fopen("users.txt","a+b");
      if(fptr != NULL){
      fwrite(&user1,sizeof(struct user), 1,fptr);
      fclose(fptr);
      printf("kayit olusturuldu!");
      }
      else{
            printf("veritabani hatasi");
      }
      
}
void girisyap(){
         char username[20];
      char passwd[20];
      printf("Giris Paneli\n\n\n");
      printf("Kullanici adi:");scanf("%s",username);
      printf("password :");scanf("%s",passwd);
     FILE *fptr =fopen("users.txt","r+b");
     struct user user1;
      if(fptr != NULL){
             fread(&user1,sizeof(struct user),1,fptr);
             if(strcmp(username,user1.username) ==0 && strcmp(passwd,user1.passwd) == 0){
                   printf("Giris Basarili");
                   fclose(fptr);
                   
             }
             else{
                   printf("kullanici adi sifre yanls");
             }
      }
       else{
            printf("veritabani hatasi");
      }
             
            }
            
            

     
      
int main()
{
    int menu;
    gel:
    printf("Fatih Login Panel\n\n\n");
    printf("1:Kayit Panel\n2:Giris Panel:\n:");
    scanf("%d",&menu);
    switch(menu){
          case 1:
            kayitol();
            goto gel;
          break;
          
          case 2:
          
       girisyap();
       
       break;
    }
    
}