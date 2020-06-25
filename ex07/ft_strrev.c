
#include <string.h>
char *ft_strrev(char*str){
char *str_start=str;
char *str_end=str_start + strlen(str) -1;

while (str_end >str_start){

char tmp=*str_start;
*str_start =*str_end;
*str_end= tmp;

str_start++;
str_end--;

}
return (str);

}
/*int main(){
char str[100]="abcde";
printf("[%s]\r\n",ft_strrev(str));
return (0);
}*/


