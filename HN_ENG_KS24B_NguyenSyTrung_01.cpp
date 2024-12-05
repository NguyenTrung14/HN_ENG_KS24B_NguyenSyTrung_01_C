#include<stdio.h>
int main(){
	int arr[100];
	int quantity;
	int index=0;
	int count=0;
	int min=100;
	int min2=100;
	int valueItem;
	printf("   MENU \n1. Nhap so phan tu va gia tri cho mang \n2. In ra gia tri cac phan tu trong mang \n3. Dem so luong cac so hoan hao co trong mang \n4. Tim gia tri nho thu 2 trong mang \n5. Them mot phan tu vao vi tri dau tien trong mang \n6. Xoa phan tu tai mot vi tri cu the \n7. Sap xep mang theo thu tu giam dan \n8. Cho nguoi dung nhap vao mot phan tu \n9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc so chan dung sau \n10. Dao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang \n11. Thoat \n");
	int select;
	printf("Moi ban chon chuc nang trong menu : ");
	scanf("%d", &select);
	printf("\n \n \n");
	switch(select){
		case 1:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			for(int i=0;i<quantity;i++){
				printf("arr[%d] = %d \n",i ,arr[i]);
			}
			break;
		case 3:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			for(int i=0;i<quantity;i++){
				for(int a=1;a<arr[i];a++){
					if(arr[i]%a==0){
						index += a;
					}
				}
				if(index == arr[i]){
				   	count +=1;
			}	
			}
			printf("So luong so hoan hao co trong mang la : %d",count);
		    break;
		case 4:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			for(int i=0;i<quantity;i++){
				if(min>arr[i]){
					min=arr[i];
				}
			}
			for(int i=0;i<quantity;i++){
				if(min!=arr[i] && min2>arr[i]){
					min2 =arr[i];
				}
			}
			printf("So nho nhat thu 2 la : %d",min2);
			break;
		case 5:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			printf("Moi ban nhap so ban muon them vao : ");
	scanf("%d", &valueItem);
	printf("Moi ban nhap vi tri ban muon them vao : ");
	scanf("%d", &index);
	for(int i=quantity;i>index;i--){
		arr[i]=arr[i-1];
	}
	arr[index]=valueItem;
	for(int i=0;i<quantity;i++){
		printf("%d",arr[i]);
	}
	        break;
	    case 11:
	    	break;
	    case 6:
	    	printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			printf("Moi ban nhap vi tri ban muon xoa : ");
			scanf("%d", &index);
			for(int i=quantity;i>index;i--){
				arr[i]=arr[i+1];
			}
			for(int i=0;i<quantity;i++){
				printf("Gia tri cua mang la : %d\t",arr[i]);
			}
		    break;
		case 9:
			printf("Moi ban nhap so luong phan tu trong mang : ");
			scanf("%d", &quantity);
			for(int i=0;i<quantity;i++){
				printf("Moi ban nhap gia tri thu %d cho mang : ",i+1);
				scanf("%d", &arr[i]);
			}
			for(int i=0;i<quantity;i++){
				if(arr[i]%2!=0){
					printf("%d\t",arr[i]);
				}
			}
			for(int i=0;i<quantity;i++){
				if(arr[i]%2==0){
					printf("%d\t",arr[i]);
				}
			}
		default:
			printf("Sai dinh dang ");
			break;
			}
	return 0;
}
