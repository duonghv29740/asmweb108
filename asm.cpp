#include <stdio.h>
#include <stdlib.h>
#include<cmath>
	int min(int a,int b){
		int min = a;
		if(min>b){
			min = b;
		}
		return min;
	}
	int checkZ(float n){
		int rl;
		if(ceil(n) != floor(n)){
			rl = 0;
		}else{
			rl = 1;
		}
	}
	isNumber(int n){
		printf("%d la mot so nguyen\n",n);
	    int i;
	    int count = 0;
	    if(n<0){
	    	printf("%d khong phai la so nguyen to\n",n);
		}
		else{
			for (i = 2; i < n; i++){
		    	if (n % i == 0 and n != i)
		        {
		            count++;
		            break;
		        }
			}
		}
		if(count ==0){
			printf("%d la mot so nguyen to\n",n);
		}else{
			printf("%d khong phai la mot so nguyen to\n",n);
		}
	    
	}
	isPower(float n){
		int result;
		float check;
		if(n<0){
			printf("%f khong phai la mot so chinh phuong\n",n);
		}else{
			result = sqrt(n);
			check = checkZ(result);
			if(check == 0){
				printf("%f khong phai la mot so chinh phuong\n",n);
			}else{
				printf("%f la mot so chinh phuong\n",n);
			}
		}
	}
	UCLN(int a, int b){
		int i;
		int n = min(a,b);
		for(i=n;i>0;i--){
			if(a%i==0 && b%i==0){
				printf("Uoc chung lon nhat cua 2 so %d va % d la: %d\n",a,b,i);
				break;
			}
		}
	}
	BCNN(int a,int b){
		int i;
		int bcnn = 0;
		if(a==0||b==0){
			printf("%d va %d khong co boi chung\n",a,b);
		}else{
			for(i=1;i<=a*b;i++){
				if(i%a==0&&i%b==0){
					bcnn =i;
					break;
				}
			}
		}
		if(bcnn != 0){
			printf("Boi chung nho nhat cua %d va %d la %d\n",a,b,i);
		}else{
			printf("%d va %d khong co boi chung\n",a,b);
		}
	}
	karaoke(float a,float b){
		float sum;
		float time = b-a;
		if(a<=3){
			sum = time*150000;
		}else{
			sum = (3*150000)+((time-3)*150000);
		}
		if(a>=14 && b<=17){
			sum = sum-(sum/100*17);
		}
		printf("Tong so tien can thanh toan la: %f",sum);
	}
	void electric(){
		float dien, tienDien;
		float a = 50*1.734, b = 100*2.014, c = 100*2.536,d = 100 * 2.834;
		printf("Nhap vao so dien tieu thu: ");
		scanf("%f", &dien);
		if(dien <= 50){
			tienDien = dien * 1.678;
		}else if(dien <= 100){
			tienDien = a + (dien-50)*1.734;
		}else if(dien <= 200){
			tienDien = a+b+(dien-100)*2.014;
		}else if(dien<=300){
			tienDien = a+b+c+(dien-200)*2.536;
		}else if(dien<=400){
			tienDien = a+b+c+d+(dien-300)*2.834;
		}else{
			tienDien = a+b+c+d+(tienDien-400)*2.927;
		}
		printf("Tien dien thang nay: %f\n", tienDien);
	}
	void fLot(){
		int i,j,count;
		int num[2],prize[2];
		for(i = 0;i<2;i++){
			printf("Nhap vao so du thuong thu %d:",i+1);
			scanf("%d",&num[i]);
		}
		for(i=0;i<2;i++){
			prize[i] = 1+ rand()%14;
		}
		for(i=0;i<2;i++){
			for(j=1;j<2;j++){
				if(prize[i]==prize[j]){
					if(num[i]==num[j]){
						if(num[i]==prize[i]){
							count =1;
						}
					}
				}else{
					if(num[i]==num[j]){
						if(num[i]==prize[i] || num[i] == prize[j]){
							count = 1;
						}
					}else{
						if(num[i]==prize[i] || num[i]==prize[j] || num[j]==prize[i] || num[j] == prize[j]){
							++count;
						}
						
					}
				}
			}
		}
		printf("Giai thuong hom nay la: %d, %d\n",prize[0],prize[1]);
		printf("%d",count);
		
	}
int main(){
	int fun;
	printf("\n");
	printf("------------------------------------\n");
	printf("CHON CHUONG TRINH BANG CACH NHAP SO:\n");
	printf("------------------------------------\n");
	printf("1. Kiem tra so nguyen\n");
	printf("2. Tim uoc chung va boi chung cua 2 so\n");
	printf("3. Tinh toan tien cho quan karaoke\n");
	printf("4. Tinh tien dien\n");
	printf("5. Doi tien\n");
	printf("6. Tinh lai suat ngan hang vay tra gop\n");
	printf("7. Vay tien mua xe\n");
	printf("8. Sap xep thong tin sinh vien\n");
	printf("9. Game POLY-LOTT\n");
	printf("10. Tinh toan phan so\n");
	printf("------------------------------------\n");
	
	
	scanf("%d", &fun);
	switch(fun){
		case 1:{
			float n;
			float rlt;
			printf("------------------------------------\n");
			printf("1. Kiem tra so nguyen\n");
			printf("\n\n");
			printf("Nhap vao so can kiem tra:");
			scanf("%f",&n);
			rlt = checkZ(n);
			if(rlt== 0){
				printf("%f khong phai la so nguyen");
			}else{
				printf("Ket qua:\n");
				isNumber(n);
				isPower(n);
			}
			printf("------------------------------------\n");
			printf("Ket thuc chuong trinh");
			break;
		}
		case 2:{
			int a,b;
			printf("2. Tim uoc chung va boi chung cua 2 so\n");
			printf("Nhap so thu nhat:");
			scanf("%d",&a);
			printf("Nhap so thu hai:");
			scanf("%d",&b);
			UCLN(a,b);
			BCNN(a,b);
			break;
		}
		case 3:{
			float a,b;
			printf("3. Tinh toan tien cho quan karaoke\n");
			printf("Nhap gio bat dau:");
			scanf("%f",&a);
			if(a<12){
			printf("Gio bat dau phai lon hon hoac bang 12");
			}else{
				printf("Nhap gio ket thuc:");
				scanf("%f",&b);
				if(b<12 ||b > 23){
					printf("Gio ket thuc phai sau 12 h va truoc 23 h\n");
				}else if(b<a){
					printf("Gio ket thuc phai lon hon gio bat dau\n");	
				}else{
					karaoke(a,b);
				}
			}
			break;
		}
		case 4:{
			printf("4. Tinh tien dien\n");
			electric();
			break;
		}
		case 5:{
			printf("5. Doi tien\n");
			break;
		}
		case 6:{
			printf("6. Tinh lai suat ngan hang vay tra gop\n");
			break;
		}
		case 7:{
			printf("7. Vay tien mua xe\n");
			break;
		}
		case 8:{
			printf("8. Sap xep thong tin sinh vien\n");
			break;
		}
		case 9:{
			printf("9. Game POLY-LOTT\n");
			fLot();
			break;
		}
		case 10:{
			printf("10. Tinh toan phan so\n");
			break;
		}
		default:{
			printf("Moi ban chon dung chuong trinh");
			break;
		}
		
	}
	
}
