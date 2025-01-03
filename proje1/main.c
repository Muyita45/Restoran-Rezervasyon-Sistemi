#include <stdio.h>
#include <string.h>
/*Mustafa Yiðit Tanrýkulu 241601053 Algoritma ve Programlama Dönem Projesi*/
int main() 
{
    
    int pzt_19 = 30, pzt_20 = 30, pzt_21 = 30, pzt_22 = 30;
    int sl_19 = 30, sl_20 = 30, sl_21 = 30, sl_22 = 30;
    int crb_19 = 30, crb_20 = 30, crb_21 = 30, crb_22 = 30;
    int prb_19 = 30, prb_20 = 30, prb_21 = 30, prb_22 = 30;
    int cm_19 = 30, cm_20 = 30, cm_21 = 30, cm_22 = 30;
    int i=1, i2=0 , i3=0; 
	int saat = 0, kisi_sayisi[600], islem = 0 , kontrol=1 , devam=1, islem2=0 ;
	int p=0 , s=0 , c=0 , ps=0 , cm=0; 
	char gun2[20]; 
	char gun[20], isim[600][30], soyisim[600][30], tel_no[600][20];
    int mno[600]; 
    
    
     
    while(1)
    {
    	mno[i]=i;
        printf("\nYapmak istediginiz islemi seciniz \n=>(1)Rezervasyon Alma \n=>(2)Rezervasyon Iptali \n=>(3)Cikis\n=>Yetkili Girisi Icin Sifreyi Giriniz(4)\n=>");
        scanf("%d", &islem);
        if (islem == 1) {
        
            printf("\nRezervasyon sistemimize hosgeldiniz, asagida kalan masalar bulunmaktadir:\n\n");
            printf(" <GUN>		    	<SAAT>		\n");
            if (p==0)
            	{printf("Pazartesi => 19.00 = %d, 20.00 = %d, 21.00 = %d, 22.00 = %d\n", pzt_19, pzt_20, pzt_21, pzt_22);}
            else 
            {
           		pzt_19=0, pzt_20=0, pzt_21=0, pzt_22=0 ;
           		printf("Pazartesi => Bazi Sebeplerden Dolayi Bugun Kapaliyiz \n");
			}
			if (s==0)
				{printf("Sali      => 19.00 = %d, 20.00 = %d, 21.00 = %d, 22.00 = %d\n", sl_19, sl_20, sl_21, sl_22);}
			else
			{
				sl_19=0, sl_20=0, sl_21=0, sl_22=0 ;
				printf("Sali      => Bazi Sebeplerden Dolayi Bugun Kapaliyiz \n");
			}
			if (c==0)
				{printf("Carsamba  => 19.00 = %d, 20.00 = %d, 21.00 = %d, 22.00 = %d\n", crb_19, crb_20, crb_21, crb_22);}
			else
			{
				crb_19=0, crb_20=0, crb_21=0, crb_22=0 ;
				printf("Carsamba  => Bazi Sebeplerden Dolayi Bugun Kapaliyiz \n");
			}
			if (ps==0)
				{printf("Persembe  => 19.00 = %d, 20.00 = %d, 21.00 = %d, 22.00 = %d\n", prb_19, prb_20, prb_21, prb_22);}
			else
			{
				prb_19=0, prb_20=0, prb_21=0, prb_22=0;
				
			}
			if (cm==0)
				{printf("Cuma      => 19.00 = %d, 20.00 = %d, 21.00 = %d, 22.00 = %d\n\n", cm_19, cm_20, cm_21, cm_22);}
		
            printf("Rezervasyon istediginiz gunu giriniz (turkce karekter kullanmayiniz)\n=>");
            scanf("%s", gun);
            printf("\nRezervasyon istediginiz saati giriniz (ornek 21)\n=>");
            scanf("%d", &saat);
            
            
            
            if (strcmp(gun, "pazartesi") == 0) {
                switch (saat) {
                    case 19:
                        if (pzt_19 > 0) { pzt_19--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 20:
                        if (pzt_20 > 0) { pzt_20--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 21:
                        if (pzt_21 > 0) { pzt_21--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 22:
                        if (pzt_22 > 0) { pzt_22--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n");
                        devam=0 ;}
                        break;
                    default:
                        printf("Gecersiz saat girildi.\n");
                        devam=0 ;
                        break;
                }
            } else if (strcmp(gun, "sali") == 0) {
                switch (saat) {
                    case 19:
                        if (sl_19 > 0) { sl_19--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 20:
                        if (sl_20 > 0) { sl_20--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 21:
                        if (sl_21 > 0) { sl_21--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n");
                        devam=0 ;}
                        break;
                    case 22:
                        if (sl_22 > 0) { sl_22--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    default:
                        printf("Gecersiz saat girildi.\n");
                        devam=0 ;
                        break;
                }
            } else if (strcmp(gun, "carsamba") == 0) {
                switch (saat) {
                    case 19:
                        if (crb_19 > 0) { crb_19--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 20:
                        if (crb_20 > 0) { crb_20--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n");
                        devam=0 ;}
                        break;
                    case 21:
                        if (crb_21 > 0) { crb_21--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 22:
                        if (crb_22 > 0) { crb_22--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    default:
                        printf("Gecersiz saat girildi.\n");
                        devam=0 ;
                        break;
                }
            } else if (strcmp(gun, "persembe") == 0) {
                switch (saat) {
                    case 19:
                        if (prb_19 > 0) { prb_19--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 20:
                        if (prb_20 > 0) { prb_20--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 21:
                        if (prb_21 > 0) { prb_21--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 22:
                        if (prb_22 > 0) { prb_22--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    default:
                        printf("Gecersiz saat girildi.\n");
                        devam=0 ;
                        break;
                }
            } else if (strcmp(gun, "cuma") == 0) {
                switch (saat) {
                    case 19:
                        if (cm_19 > 0) { cm_19--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 20:
                        if (cm_20 > 0) { cm_20--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 21:
                        if (cm_21 > 0) { cm_21--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    case 22:
                        if (cm_22 > 0) { cm_22--; }
                        else { printf("Bu saatte bos masamiz bulunmamaktadir.\n"); 
                        devam=0 ;}
                        break;
                    default:
                        printf("Gecersiz saat girildi.\n");
                        devam=0 ;
                        break;
                }
            } else {
                printf("Gecersiz gun girildi.\n");
                devam=0 ;
            }
            
            
            
            if (devam==1)
            {
                do
                {
                    printf("Rezervasyon Kaydi icin asagidaki bilgileri doldurunuz\n");
                    printf("Isim =>");
                    scanf("%s",isim[i]);
                    printf("Soyisim =>");
                    scanf("%s",soyisim[i]);
                    printf("Telefon Numarasi =>");
                    scanf("%s",tel_no[i]);
                    printf("Kisi Sayisi =>");
                    scanf("%d",&kisi_sayisi[i]);
                    printf("\nBilgiler ;");
                    printf("\nIsim => %s \nSoyisim => %s \nTelefon Numarasi => %s \nKisi Sayisi => %d \n",isim[i],soyisim[i],tel_no[i],kisi_sayisi[i]);
                    printf("Bilgileriniz Dogruysa (1) , Hatali Giris veya Duzeltmek istediginiz bilgi varsa (2) sayilarini giriniz \n");
                    scanf("%d",&kontrol);
                }
            
                while (kontrol==2);
                printf("Rezervasyonunuz basariyla tamamlanmistir \n");
                printf("Musteri numaraniz => %d \n",mno[i]);
                i++;
                printf("... \n... \n... \n... \n... \n... \n... \n...\n...\n...\n...\n ");
                
            }
            
        } else if (islem == 2) {
        	
            
            
            do
            {
                printf("Iptal islemi icin asagidaki yerleri giriste kullandiginiz bilgiler ile doldurunuz \n");
                printf("Musteri numaranizi giriniz =>");
                scanf("%d",&i2);
                printf("Rezervasyon aldiginiz Gunu giriniz =>");
                scanf("%s",gun);
                printf("Saat =>");
                scanf("%d",&saat);
                printf("\nBilgiler ;\n");
                printf("Musteri Numarasi => %d \nGun => %s \nSaat => %d \n",i2,gun,saat);
                printf("Bilgileriniz Dogruysa (1) , Hatali Giris veya Duzeltmek istediginiz bilgi varsa (2) sayilarini giriniz \n");
                scanf("%d",&kontrol);
            }
            while (kontrol==2); 
            
        
        
            if (strcmp(gun, "pazartesi") == 0) {
	            switch (saat) {
	                case 19:
	                    if (pzt_19 < 30) { pzt_19++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 20:
	                    if (pzt_20 < 30) { pzt_20++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 21:
	                    if (pzt_21 < 30) { pzt_21++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 22:
	                    if (pzt_22 < 30) { pzt_22++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                default:
	                    printf("Gecersiz saat girildi.\n");
	                    break;
	            }
	    	}
	    	else if (strcmp(gun, "sali") == 0) {
	            switch (saat) {
	                case 19:
	                    if (sl_19 < 30) { sl_19++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 20:
	                    if (sl_20 < 30) { sl_20++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 21:
	                    if (sl_21 < 30) { sl_21++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 22:
	                    if (sl_22 < 30) { sl_22++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                default:
	                    printf("Gecersiz saat girildi.\n");
	                    break;
	            }
	    	}
	    	else if (strcmp(gun, "carsamba") == 0) {
	            switch (saat) {
	                case 19:
	                    if (crb_19 < 30) { crb_19++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 20:
	                    if (crb_20 < 30) { crb_20++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 21:
	                    if (crb_21 < 30) { crb_21++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 22:
	                    if (crb_22 < 30) { crb_22++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                default:
	                    printf("Gecersiz saat girildi.\n");
	                    break;
	            }
	    	}
	    	else if (strcmp(gun, "persembe") == 0) {
	            switch (saat) {
	                case 19:
	                    if (prb_19 < 30) { prb_19++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 20:
	                    if (prb_20 < 30) { prb_20++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 21:
	                    if (prb_21 < 30) { prb_21++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 22:
	                    if (prb_22 < 30) { prb_22++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                default:
	                    printf("Gecersiz saat girildi.\n");
	                    break;
	            }
	    	}
	    	else if (strcmp(gun, "cuma") == 0) {
	            switch (saat) {
	                case 19:
	                    if (cm_19 < 30) { cm_19++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 20:
	                    if (cm_20 < 30) { cm_20++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 21:
	                    if (cm_21 < 30) { cm_21++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                case 22:
	                    if (cm_22 < 30) { cm_22++; }
	                    else { printf("Rezervasyon yapilan zamandan farkli bir zaman girilmistir lutfen dogru giris yapiniz.\n");}
	                    break;
	                default:
	                    printf("Gecersiz saat girildi.\n");
	                    break;
	            }
	    	}
	    	else {
                printf("Gecersiz gun girildi.\n");
                devam=0 ;
            }
            	
           
        } else if (islem == 3) {
            break;
        } else if (islem == 4) {
        	printf("Yetkili Girisi Yapildi istediginiz islemi secin\n=>(1)Gun Ayarlari \n=>(2)Musteri Listesi \n");
        	scanf("%d",&islem2);
        	
			if (islem2==1) {
        		printf("Restorantin kapali olacagi gunu giriniz\n=>");
        		scanf("%s",gun2);
        		if (strcmp(gun2, "pazartesi") == 0) {
        			p=1;
				}
        		else if (strcmp(gun2, "sali") == 0) {
        			s=1;
				}
				else if (strcmp(gun2, "carsamba") == 0) {
					c=1;
				}
        		else if (strcmp(gun2, "persembe") == 0) {
        			ps=1;
				}
        		else if (strcmp(gun2, "cuma") == 0) {
        			cm=1;
				}
				printf("%s Gunu rezervasyona kapatilmistir",gun2);
			}
			
			else if (islem2==2) {
				for(i3=1;i3<i;i3++)
				{
					printf("%d.musterinin bilgileri ; \nAd=%s \nSoyad=%s \nTelefon Numarasi=%s \nKisi Sayisi=%d \n",mno[i3],isim[i3],soyisim[i3],tel_no[i3],kisi_sayisi[i3]);
				}
			}
		} else {
            printf("Gecersiz islem secildi.\n");
        }
    }
    return 0;
}

