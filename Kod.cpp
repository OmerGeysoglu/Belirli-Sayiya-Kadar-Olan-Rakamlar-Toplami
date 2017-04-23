#include<stdio.h>
int main(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			//printf("%d%d\n",i,j);
			for(int k=0;k<10;k++){
				for(int l=0;l<10;l++){
					for(int m=0;m<10;m++){
							//printf("%d%d%d%d%d\n",i,j,l,k,m); TÜM SAYILARI YAZAR.
							if(i+j+k+l+m==7) printf("%d%d%d%d%d\n",i,j,l,k,m);
					} //FOR SAYISI İSTENİLİRSE ARTTIRILIP SAYI BASAMAK DEĞERİ YÜKSELTİLEBİLİR.	
				}
			}
		}
		
	}
	return 0;
}
