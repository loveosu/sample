//#include <???.h> //Author by Quan dep trai

int main() { 

int a = 5; // 0000 0000 0000 0101 
int b = 6; // 0000 0000 0000 0110
int z1, z2, z3, z4, z5, z6, test; 

test = 10 % 2;
printf("\t %d \n",test);

z1 = a & b; // 0000 0000 0000 0100 
printf("%d \n",z1);

z2 = a | b; // 0000 0000 0000 0111 
printf("%d \n",z2);

z3 = a ^ b; // 0000 0000 0000 0011 
printf("%d \n",z3);

z4 = ~a; // 1111 1111 1111 1010 
printf("%d \n",z4);

z5 = a >> 2;// 0000 0000 0000 0001 
printf("%d \n",z5);

z6 = a << 2;// 0000 0000 0001 0100
printf("%d \n",z6);

return 0;
}
