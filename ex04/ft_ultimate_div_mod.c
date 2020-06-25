void ft_ultimate_div_mod(int *a,int *b){
int answer;
answer=*a / *b;
int answer_b;
answer_b=*a % *b;
*a=answer;
*b=answer_b;
}
