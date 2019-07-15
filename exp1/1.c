#include<stdio.h>

int main(){
	int i;
	int j=0;
	char arr[10];
    
	printf("Enter the String value\n");

	for(i=0;i<10;i++ ){
	scanf("%c",&arr[i]);
}

for(i=0;i<10;i++ ){
	if(arr[i]==97+j){
	printf("%c",arr[i]);
	printf("->char\n");
	
}
j++;
}

return 0;

}

