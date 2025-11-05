#include<stdio.h>
int main(){
	int arr[100],choice,size,indexAdd,indexValue,indexDelete,indexUpdate,valueUpdate,findnumber;
	int sum = 0,flag07 = 0,temp,min,max;
	do{
		printf("\n1.Nhap so phan tu va gia tri cho mang.\n");
	    printf("2.Hien thi mang.\n");
	    printf("3.Tinh tong cac phan tu trong mang.\n");
	    printf("4.Them phan tu vao vi tri bat ky.\n");
	    printf("5.Xoa phan tu o vi tri bat ky.\n");
	    printf("6.Cap nhat phan tu o vi tri bat ky.\n");
	    printf("7.Tim kiem phan tu trong mang.\n");
	    printf("8.Sap xep mang.\n");
	    printf("9.Tinh hieu so lon nhat va so nho nhat trong mang.\n");
	    printf("10.Thoat chuong trinh.\n");
	    printf("Moi ban nhap lua chon: ");
	    scanf("%d",&choice);
	    switch(choice){
	        case 1 :
	    		printf("Nhap so phan tu mang: ");
	    		scanf("%d",&size);
	    		for(int i = 0;i<size;i++){
	    			printf("phan tu arr[%d] = ",i);
	    			scanf("%d",&arr[i]);
				}
				break;
			case 2 :
				for(int i = 0;i<size;i++){
					printf("Phan tu arr[%d] = %d\n",i,arr[i]);
				}
				break;
			case 3 :
				for(int i = 0;i<size;i++){
					sum = sum + arr[i];
				}
				printf("Tong cac phan tu trong mang: %d",sum);
				break;
			case 4 :
				printf("Moi ban nhap vi tri muon chen: ");
				scanf("%d",&indexAdd);
				printf("Moi ban nhap gia tri muon chen: ");
				scanf("%d",&indexValue);
				for(int i = size;i>indexAdd;i--){
					arr[i] = arr[i-1];
				}
				size++;
				arr[indexAdd] = indexValue;
				break;
			case 5 :
				printf("Moi ban chon vi tri muon xoa: ");
				scanf("%d",&indexDelete);
				size--;
				for(int i = indexDelete;i<size;i++){
					arr[i] = arr[i+1];
				}
				break;
			case 6 :
				printf("Moi ban nhap vi tri muon cap nhat: ");
				scanf("%d",&indexUpdate);
				printf("Moi ban nhap gia tri muon cap nhat: ");
				scanf("%d",&valueUpdate);
				arr[indexUpdate] = valueUpdate;
				break;
			case 7 :
				printf("Moi ban nhap gia tri muon tim kiem: ");
				scanf("%d",&findnumber);
				for(int i = 0;i<size;i++){
					if(arr[i] == findnumber){
						printf("tim thay gia tri o vi tri arr[%d]",i);
						flag07 = 1;
					}
				}
					if(flag07 == 0){
						printf("khong tim thay gia tri");
					}
				break;
			case 8 :
				for(int i = 0;i<size;i++){
					for(int j = 0;j<size-i-1;j++){
						if(arr[j] >= arr[j+1]){
							temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}
					}
				}
				break;
			case 9 :
				min = arr[0];max = arr[0];
				for(int i = 0;i<size;i++){
					if(arr[i] > max){
						max = arr[i];
					}
					if(arr[i] < min){
						min = arr[i];
					}
				}
				printf("Hieu cua so lon nhat va so be nhat trong mang: %d - %d = %d",max,min,max - min);
	    }
	}while(choice != 10);



   return 0;
}

