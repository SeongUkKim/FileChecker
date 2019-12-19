#include <iostream>
#include <conio.h>
#include <String>
#include <string.h>
#include <stdio.h>
#include <io.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main(int argc, char *argv[]) {

   	char *temp[100];
   	int size1, size2 = 0;
   	int k, j, i = 0;
   	int f = 1;
   	float line = 0;
   	float accord = 0;
   	float final_accord = 0;
   	float total = 0;
   	int i_in;
   	int j_in;
   	char filename[260] = { 0, };
   	char buffer[100000] = { 0, };
   	_finddata_t fd;
   	long handle;
   	int result_in = 1;
   	int ck = 1;
   	handle = _findfirst(".\\*.*", &fd);  //현재 폴더 내 모든 파일을 찾는다.

   
	if (handle == -1){
    	printf("파일이 없습니다.\n");
      	return 0;
	}

   	while (result_in != -1){
    	for (i_in = 0; i_in < 260; i_in++){
    		//c
        	if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'c' && fd.name[i_in + 2] == '\0'){
            	memcpy(filename, fd.name, sizeof(fd.name));
            	argc++;
            	printf("c file name : %s/\n", filename);

            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--){
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}


            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//java
         	else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'j' && fd.name[i_in + 2] == 'a' && fd.name[i_in + 3] == 'v' && fd.name[i_in + 4] == 'a'){
            	memcpy(filename, fd.name, sizeof(fd.name));
            	printf("java file name : %s/\n", filename);

            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--){
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}
            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//html
         	else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'h' && fd.name[i_in + 2] == 't' && fd.name[i_in + 3] == 'm' && fd.name[i_in + 4] == 'l'){
            	memcpy(filename, fd.name, sizeof(fd.name));
				printf("한글 file name : %s/\n", filename);

            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--) {
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}
            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//c++
         	else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'c' && fd.name[i_in + 2] == 'p' && fd.name[i_in + 3] == 'p'){
            	memcpy(filename, fd.name, sizeof(fd.name));
            	argc++;
            	printf("c++ file name : %s/\n", filename);

            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--) {
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}

            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//javascript
			else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'j' && fd.name[i_in + 2] == 's' && fd.name[i_in + 3] == 'p'){
            	memcpy(filename, fd.name, sizeof(fd.name));
            	printf("jsp file name : %s/\n", filename);
            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--) {
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}

            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//python
         	else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'p' && fd.name[i_in + 2] == 'y'){
            	memcpy(filename, fd.name, sizeof(fd.name));
				printf("py file name : %s/\n", filename);

            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--) {
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}

            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	
         	//css
         	else if (fd.name[i_in] == '.' && fd.name[i_in + 1] == 'c' && fd.name[i_in + 2] == 's' && fd.name[i_in + 3] == 's'){
            	memcpy(filename, fd.name, sizeof(fd.name));
            	printf("css file name : %s/\n", filename);
            	FILE* fp_in = fopen(filename, "r");
            	fread(buffer, sizeof(buffer), 1, fp_in);
            	fclose(fp_in);

            	//.txt뒤에 이상한 값이 뜸 수정
            	for (j_in = sizeof(filename) - 1; j_in >= 0; j_in--) {
               		if (filename[j_in] == '.') {
                  		filename[j_in + 1] = 't';
                  		filename[j_in + 2] = 'x';
                  		filename[j_in + 3] = 't';
                  		filename[j_in + 4] = '\0';
               		}
            	}
            	
            	FILE* fpp_in = fopen(filename, "w");
            	fputs(buffer, fpp_in);
            	fclose(fpp_in);
            	temp[ck - 1] = (char*)malloc(strlen(filename) + 1);
            	strcpy(temp[ck - 1], filename);        
            	ck++;
            	filename[0] = '\0';
            	break;
         	}
         	memset(buffer, 0, sizeof(buffer));
         	memset(filename, 0, sizeof(filename));
      	}
      	memset(filename, 0, sizeof(filename));
      	result_in = _findnext(handle, &fd);
   }
  	_findclose(handle);
  	printf("\n해당 프로그램의 실행 경로에 있는 조건파일들이 선택 되었습니다.\n");
   

	printf("\n\n-----------중복 검사 결과--------------\n\n"); 
   //파일 중복검사 코드 
   	for (k = 0; k <= argc-3; k++){
      	for (j = k + 1; j <= argc-2; j++){
         
			FILE* fp1 = fopen(temp[k], "r");
        	FILE* fp2 = fopen(temp[j], "r");

         	if (fp1 == NULL || fp2 == NULL){
            	printf("스트림 생성시 오류발생\n");
            	return 0;
        	}
        	fseek(fp1, 0, SEEK_END);
        	size1 = ftell(fp1);

         	fseek(fp2, 0, SEEK_END);
         	size2 = ftell(fp2);

         	fseek(fp1, 0, SEEK_SET);
         	fseek(fp2, 0, SEEK_SET);


         	char str_temp1[255];
         	char str_temp2[255];

         	if (!(size1 == 0 && size2 == 0)){
            	while (!feof(fp1)){
            		line++;
               		fgets(str_temp1, sizeof(str_temp1), fp1);


               	if (!strcmp(str_temp1, "\n")){
                	fgets(str_temp1, sizeof(str_temp1), fp1); //fp1에 있는 내용의 다음 문장을 가지고 옴.
               	}

               	while (!feof(fp2)){
                	fgets(str_temp2, sizeof(str_temp2), fp2);  //fp2에 있는 내용을 가지고 옴.

                	for (i = 0; i < strlen(str_temp1); i++){
                     	if (str_temp1[i] == str_temp2[i]){
                        	accord++; //둘이 일치하면 변수 값 올림.
                     	}
                    	total++;  //str_temp1의 길이임. 그냥 변수 하나 만듦.
                  	}

                	if ((accord / total * 100) >= 70){ //문장끼리 일치도가 70프로 이상이면 일치하는 것으로 보고 변수 값(final_accord)을 올림.
                    	final_accord++;
                     	accord = 0;
                     	total = 0;
                     	break;
                  	}

                  	accord = 0;
                  	total = 0;
               	}
               	fseek(fp2, 0, SEEK_SET);
            }
            if (size1 == 0){
               final_accord = 0;
            }
            if (size2 == 0){
               final_accord = 0;
            }

            if (final_accord / line * 100 > 50){
            	printf("%s와 %s가 유사합니다.\n", temp[k], temp[j]);
            	final_accord = 0;
            	line = 0;
            }
            	final_accord = 0;
            	line = 0;
        	}
        	fclose(fp1);
        	fclose(fp2);
    	}
   }//중복검사 종료   
   return 0;
}
