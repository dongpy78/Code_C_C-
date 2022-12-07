#include<stdio.h>
int arr[]={1,2,3,4,5,6,7,8};
int S=20;
int n=sizeof(arr)/sizeof(arr[0]);
int arr1[20]; //b[i]=1 -> a[i] tham gia day con

void kt_in(){
	int tong=0;
	for(int k=0;k<n;k++)
		if(arr1[k]==1)
			tong+=arr[k];
		if(tong==S){
			printf("\n");
			for(int k=0;k<n;k++)
			if(arr1[k]==1)
				printf("%3d",arr[k]);
		}
}

void thu(int i){
	for(int j=0;j<=1;j++){
		arr1[i]=j;
		if(i<n-1) 
			thu(i+1);
		else
			kt_in();
			arr1[i]=0;
		}
}

int main(){
	thu(0);
}
