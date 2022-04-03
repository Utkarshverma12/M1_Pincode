/*A Program to print pincodes of states of India using file Handling(which saves the cities with pincode)
  NOTE : Respected sir/madam, my compiler of Visual code is having some problem and is returning no input so I used online compilers to complete the program */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int delhi() // function for delhi's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("delhi.txt", "r");    //opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {    // taking words from file delhi.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }
 int haryana()  // function for haryana's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("haryana.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file haryana.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	} 
 	return 0; 
 }int punjab()    // function for punjab's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("punjab.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file punjab.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	} 
 	return 0; 
 }int chandigarh()    // function for chandigarh's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("chandigarh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file chandigarh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	} 
 	return 0; 
 }int himachal_pradesh()    // function for himachal pradesh's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("himachal pradesh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) { // taking words from file himachal pradesh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int jammu()    // function for jammu and kashmir's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("jammu and kashmir.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file jammu and kashmir.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int uttarpradesh()    // function for uttar pradesh's pincode
 {   
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("uttar pradesh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file uttar pradesh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int rajasthan()     // function for rajasthan's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("rajasthan.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file rajasthan.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int gujarat()     // function for gujarat's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("gujarat.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file gujarat.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int daman()    // function for daman and diu's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("daman and diu.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file daman and diu.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int maharastra()   // function for maharastra's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("maharastra.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file maharastra.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int goa()    // function for goa's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("goa.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file goa.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int madhya()    // function for madhya pradesh's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("madhya pradesh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) { // taking words from file madhya pradesh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int andra()    // function for andra pradesh's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("andra pradesh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file andra pradesh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	} 
 	return 0; 
 }int karnataka()    // function for karnataka's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("karnataka.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file karnataka.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int tamil()   // function for tamil nadu's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("tamil nadu.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file tamil nadu.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int kerala()    // function for kerala's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("kerala.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file kerala.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int lakshadweep()    // function for lakshadweep's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("lakshadweep.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file lakshadweep.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int west()    // function for west bengal's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("west bengal.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file west bengal.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int andaman()    // function for andaman and nicobar's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("andaman and nicobar.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file andaman and nicobar.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int orissa()    // function for orissa's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("orissa.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file orissa.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int arunachal()     // function for arunachal pradesh's pincode
 {    
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("arunachal pradesh.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file arunachal pradesh.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int assam()    // function for assam's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("assam.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file assam.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int manipur()     // function for manipur's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("manipur.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file manipur.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int meghalaya()     // function for meghalaya's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("meghalaya.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file meghalaya.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int nagaland()     // function for nagaland's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("nagaland.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file nagaland.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int tripura()     // function for tripura's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("tripura.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file tripura.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }int bihar()     // function for bihar's pincode
 {  
      FILE *ifp;	
      int count = 0; 
 	 char words[100][20],district[20]; 
 	 FILE *f = fopen("bihar.txt", "r");//opening file
      if (ifp == NULL) {       //NULL if file does not opens
      printf("Can't open file.");
      } 
      printf("Enter District whose pincode you wanna know\n"); 
      scanf("%s",district);
 	 while (fscanf(f, "%s", words[count])>0) {  // taking words from file bihar.txt in word
 		if (strcmp(words[count], district)==0) {  // for comapring words
 			printf("%s", words[count+1]);    //for inputting next word of searched words
 			break; 
 		} 
 		else 
 			count+2; // putting pointer to next city name
 	} 
 	return 0; 
 }
int main()                                                                             //main function
{
 int i,a;//taking integers
 printf("A program to find pincode of your place\n");
 printf("Press 1 for Delhi,Haryana,Punjab,Chandigarh,Himachal Pradesh and Jammu and kashmir\n");  // taking input according to state's pincodes initial number
 printf("Press 2 for Uttar Pradesh\n");          // taking input according to state's pincodes initial number
 printf("Press 3 for Rajasthan, Gujarat, Daman and Diu\n");        // taking input according to state's pincodes initial number
 printf("Press 4 for Maharastra, Goa, Madhya Pradesh \n");          // taking input according to state's pincodes initial number
 printf("Press 5 for Andra Pradesh, Karnataka\n");            // taking input according to state's pincodes initial number
 printf("Press 6 for tamil Nadu, Kerala, Lakshadweep\n");           // taking input according to state's pincodes initial number
 printf("Press 7 for West bengal, Andaman and Nicobar,Orissa, Arunachal Pradesh,Assam , Manipur, Meghalaya, Nagaland and Tripura\n");        // taking input according to state's pincodes initial number
 printf("Press 8 for Bihar\n");       // taking input according to state's pincodes initial number
 scanf("%d",&i);   // for taking input from user
 switch (i)        // opening switch case for switching with states
  {
   case 1:            // nested switch case 
    printf("Press 1 for Delhi, 2 for Haryana, 3 for Punjab, 4 for Chandigarh, 5 For Himachal Pradesh, 6 for jammu and kashmir\n");
    scanf("%d",&a);
    switch (a)
    {
     case 1:
        printf("Delhi\n");
         delhi();               // for calling delhi () function
        break;
     case 2:
        printf("Haryana\n");
        haryana();         // for calling haryana() function
        break;
     case 3:
        printf("punjab\n");
        punjab();         // for calling punjab() function
        break;
     case 4:
        printf("Chandigarh\n");
        chandigarh();     // for calling chandigarh() function
        break;
     case 5:
        printf("himachal Pradesh\n");
        himachal_pradesh();      // for calling himachal_pradesh() function
        break;
     case 6:
         printf("Jammu and Kashmir\n");
         jammu();      // for calling jammu() function
        break;
     default:
        printf("invalid input\n");   // returning "invalid input" if user inputs wrong input
        break;      
     }
     break;

      case 2:
      printf("Uttar Pradesh\n");
      uttarpradesh();        // for calling uttar pradesh() function
     break;
      case 3:
     printf("Press 1 for Rajasthan, Press 2 for Gujarat ,Press 3 for Daman and Diu\n");
     scanf ("%d",&a);
     switch (a)
     {
     case 1:
        printf("Rajasthan\n");
        rajasthan();        // for calling rajathan() function
        break;
     case 2:
        printf("Gujarat\n");
        gujarat();      // for calling guajarat() function
        break;
     case 3 :
        printf("Daman and Diu\n");     
        daman();         // for calling daman() function
     default:
     printf("Invalid Input\n");      // returning "invalid input" if user inputs wrong input
         break;
     }
     break;
      case 4:
     printf("Press 1 for Maharastra, Press 2 for Goa, Press 3 for Madhya Pradesh\n");
     scanf("%d",&a);
     switch (a)
     {
     case 1:
        printf("Maharastra\n");
        maharastra();     // for calling maharastra() function
        break;
     case 2:
        printf("Goa\n");
        goa();      // for calling goa() function
        break;
     case 3:
         printf("Madhya Pradesh\n");   
         madhya();      // for calling madhya pradesh() function
         break;
     default:
        printf("Invalid Input\n");       // returning "invalid input" if user inputs wrong input
        break;
     }
     break;
     case 5:
     printf("Press 1 for Andra Pradesh, Press 2 for Karnataka\n");
     scanf("%d",&a);
     switch (a)
     {
     case 1:
        printf("Andra Pradesh\n");
        andra();       // for calling andra() function
        break;
     case 2:
        printf("Karnataka\n");
        karnataka();       // for calling karnataka() function
        break;
     default:
     printf("Invalid Input\n");      // returning "invalid input" if user inputs wrong input
        break;
     }
     break;
      case 6:
     printf("Press 1 for Tamil Nadu, Press 2 for Kerala, Press 3 for Lakshadweep\n");
     scanf("%d",&a);
     switch (a)
     {
     case 1:
        printf("Tamil Nadu\n");
        tamil();      // for calling tamil nadu() function
        break;
     case 2:
        printf("Kerala\n");
        break;       // for calling kerala() function
     case 3:
        printf("Lakshadweep\n");
        lakshadweep();       // for calling lakshadweep() function
        break;
     default:
     printf("Invalid Input\n");       // returning "invalid input" if user inputs wrong input
        break;
     }
     break;
      case 7:
     printf("Press 1 for West Bengal, Press 2 for Andaman and Nicobar, Press 3 for Orissa, Press 4 for Arunachal Pradesh, Press 5 for Assam, Press 6 Manipur, Press 7 Meghalaya, Press 8 Nagaland, Press 9 for Tripura\n");
     scanf("%d",&a);
     switch (a)
     {
     case 1:
        printf("West Bengal\n");
        west();       // for calling west bengal() function
        break;
     case 2:
        printf("Andaman and Nicobar\n");
        andaman();       // for calling andaman and nicobar() function
        break;
     case 3:
        printf("Orissa\n");
        orissa();      // for calling orissa() function
        break;
     case 4:
        printf("Arunachal Pradesh\n");
        arunachal();     // for calling arunachal pradesh() function
        break;
     case 5:
        printf("Assam\n");
        assam();      // for calling assam() function
        break;
     case 6:
         printf("Manipur\n");
         manipur();     // for calling manipur() function
        break;
     case 7:
        printf("Meghalaya\n");
        meghalaya();      // for calling meghalaya() function
        break;
     case 8:
        printf("Nagaland\n");
        nagaland();     // for calling nagaland() function
        break;
     case 9:
        printf("tripura\n");
        tripura();      // for calling tripura() function
        break;
     default:
        printf("invalid input\n");     // returning "invalid input" if user inputs wrong input
        break;
     }
     break;
     case 8:
      printf("Bihar\n");
      bihar();         // for calling bihar() function
      break;
     
      default:
      printf("invalid Input\n");       // returning "invalid input" if user inputs wrong input
     break;
     return 0;
     }
     }