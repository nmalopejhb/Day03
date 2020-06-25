#include <unistd.h>

int ft_strlen(char *str){
int i;
i=0;
while(str[i] != '\0'){

i++;

}
return (i);
}
/*int main(){

	int dsply;

dsply=ft_strlen("Simphiwe");
printf("%d",dsply);
return (0);

}*/
