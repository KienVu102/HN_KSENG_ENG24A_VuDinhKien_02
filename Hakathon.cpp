#include <stdio.h>
#include <stdlib.h>

int main(){
	int choice, index, firstMax, secondMax, count=1, n, a=100, arr[a];
	do{
		printf("\nMenu\n");
		printf("1. Nhap so phan tu va cac gia tri\n");
		printf("2. In ra gia tri cac phan tu\n");
		printf("3. In ra cac gia tri chan le \n");
		printf("4. In ra gia tri lon thu 2\n");
		printf("5. Them phan tu vao dau mang\n");
		printf("6. Xoa 1 phan tu tai 1 vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Nhap phan tu can tim \n");
		printf("9. In ra SNT va binh phuong len\n");
		printf("10. Sap xep theo thu tu giam dan\n");
		printf("11. Thoat\n");
		printf("\nLua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu vao mang: ");
				scanf("%d", &n);
				a=n;
				for(int i=0; i<n; i++){
					printf("Phan tu arr[%d]: ", i);
					scanf("%d", &arr[i]);
				}
				printf("\n");
				break;
			
			case 2:
				printf("Cac gia tri co trong mang la: ");
				for(int i=0; i<n; i++){
					printf("%d ", arr[i]);
				}
				printf("\n\n");
				break;
			
			case 3:
				for(int i = 0; i <n; i++){
					if(arr[i]%2==0){
						printf("Cac gia tri so chan la: %d\n", arr[i]);
				    }else{
				    	printf("Cac gia tri so le la: ");
				    	printf("%d ", arr[i]);
					}
                }
			    break;

			case 4:
			firstMax=arr[0];
			for(int i = a-1; i >0; i--){
		        if(arr[i] >= firstMax){
		            secondMax = firstMax;
		            firstMax = arr[i];
		        }else if (arr[i] > secondMax){
		            secondMax = arr[i];
		        }
		    }
		    printf("Gia tri lon thu hai trong mang la: %d", secondMax);	
			break;
			
			case 5:
				n++;
				printf("Nhap vi tri ban muon them: ");
				scanf("%d", &index);
				for( int i=n; i>index; i--){
					arr[i]=arr[i-1];
				}
				printf("Nhap phan tu ban muon them: ");
				scanf("%d", &arr[index]);
				break;
			
			case 6:
				printf("Nhap vi tri muon xoa: ");
				scanf("%d", &index);
				for(int i=index; i<n; i++){
					arr[i]=arr[i+1];
				}
				n--;
				break;
				
			case 7:
				printf("Cac so chua duoc sap xep la: ");
				for(int i=0; i<a; i++){
				printf("%d ", arr[i]);
				}
				for(int i = 0; i < a; i++){
				int key = arr[i];
				int j = i - 1;
				while(j >=0 && arr[j] < key){
				arr[j+1] = arr[j];
				j = j - 1;
				}
				arr[j+1] = key;	
				}
				printf("\nCac so da duoc sap xep lai la: ");
				for(int i = 0; i < a; i++){
				printf("%d ", arr[i]);
				}
				break;
				
		    case 8:
		    	printf("Ban hay nhap 1 phan tu: ");
				scanf("%d", &n);
				for(int i=0; i<=a; i++){
				if(n==arr[i]){
				count=1; 
				printf("Vtri phan tu trong mang la: %d", i+1); 
				} 
			} 
			if(count!=1){
			printf("Phan tu nay khong co trong mang");
			}
		    break;
		    
		    case 9:
		    	int SNT[100];
		    	for(int i=0; i<n; i++){
		    		count=0;
		    		for(int j=1; j<=arr[i]; j++){
		    			if(arr[i]%j==0){
		    				count++;
		    				
						}
					}
					if(count==2){
						SNT[index]=arr[i];
					    index++;
					}
				}
				for(int i=0; i<index; i++){
					printf("SNT la: %d", SNT[i]);
				}
		    	break;
		    
		    case 10:
			for(int i=0; i<5; i++){
			for(int j=0; j<5-i-1; j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
			  }
			}
		    printf("Cac so da sap xep giam dan la: ");
			for(int i=0; i<5; i++){
			printf("%d ", arr[i]);
			}
			break;
			
			case 11:
				printf("Thoat chuong trinh\n");
				break;
				
			default:
				printf("Lua chon khong hop le. Vui long thu lai!\n");
				
			
		}
	}while(choice != 11);
	
	return 0;
} 
