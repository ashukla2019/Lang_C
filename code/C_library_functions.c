/*
Advantages of using C standard library functions:
1) Usability
2) Optimization
3) Portability
4) Time savings

********************************************stdio.h*****************************************
printf():- Display the output on the screen.
scanf():- Take input from the user.
getchar():- Return characters on the screen.
putchar():- Display output as a single character.
fgets():- Take line as an input.
puts():- Display a line on the screen.
fopen():- Open a file.
fclose():- Close a file.
getw():- Reads an integer from file.
putw():- Writes an integer to file.
fgetc():- Reads a character from file.
putc():- Writes a character to file.
fputc():- Writes a character to file.
fgets():- Mainly used to read a string one line at a time.
fputs():- Writes string to a file.
feof():- Finds end of file.
fgetchar:- Reads a character from the keyboard.
fgetc():- Reads a character from file.
fprintf():- Writes formatted data to a file.
fscanf():- Reads formatted data from a file.
fputchar:- Writes a character from the keyboard.
fseek():- Moves file pointer to given location.
SEEK_SET:- Used for moving the file pointer at the starting of a file.
SEEK_CUR:- Moves file pointer at given location.
SEEK_END:- Moves file pointer at the end of file.
ftell():- Gives current position of file pointer.
rewind():- You can move the file pointer at the beginning of the file.
putc():- Writes a character to file.
sprint():- Writes formatted output to string.
sscanf():- Reads formatted input from a string.
remove():- Deletes a file.
flush():- Flushes a file.

**************************<stdlib.h> header file**************************************
malloc function in C:- It is used for dynamic allocation in C. It is mainly used for 
allocating a block of memory dynamically. And it returns a null pointer during the execution
of the program.

	int *point;
	point = malloc(10 * sizeof(*point)); // block of 15 integers!

calloc() function in C: Calloc stands for Contiguous allocation. The main purpose of this 
is to allocate multiple blocks of memory. This function is used for allocating memory to
complex data structures like arrays, structures etc.

	int a, *point, sum = 0;
	point = calloc(4, sizeof(int));

free() function in C: It is used to deallocate or release memory in C programs. 
During dynamic allocation, you have to free some memory explicitly. If not, you may encounter
errors in compilation.

	int *point = malloc(4 * sizeof(*point));
	*(point + 3) = 5;
	printf("Third integer value is: %d",*(point + 3));
	free(point);
	

realloc() function in C: It is used for allocating more memory to the already allocated memory. 
realloc() stands for reallocation of memory.
	
	
***************************************<ctype.h> header file******************************************
isalpha() – Check if the character is an alphabet or not.
isdigit() – Check if the character is a digit or not.
isalnum() – Check if the character is alphanumeric or not.
isupper() – Check if the character is in uppercase or not
islower() – Check if the character is in lowercase or not.
toupper() – Convert the character into uppercase.
tolower() – Convert the character into lowercase.
iscntrl() – Check if the character is a control character or not.
isgraph() – Check if the character is a graphic character or not.
isprint() – Check if the character is a printable character or not
ispunct() – Check if the character is a punctuation mark or not.
isspace() – Check if the character is a white-space character or not.
isxdigit() – Check if the character is hexadecimal or not.

	#include <stdio.h>
	#include <ctype.h>
	int main()
	{
	printf("TechVidvan Tutorials: <ctype.h> header file examples!\n\n");
	char a,res;
	char b,c;
	a='T';
	b = 't';
	c = '7';
	printf("Converting %c to lower case: %c\n",a,tolower(a));
	if(isalpha(a)){
	  printf("It is a character!\n");
	}
	if(isdigit(a)){
	  printf("It is a digit!\n");
	}
	else{
	  printf("It is not  digit!\n");
	}
	if(isalnum(c)){
	  printf("It is alphanumeric!\n");
	}
	printf("Converting %c to upper case: %c\n",b,toupper(b));
	return 0;
	}
	
	
*********************<string.h> header file********************************************
strcpy(s1, s2):- Copies string s2 into string s1.
strcat(s1, s2):- Used for concatenating string s2 at the end of string s1.
strlen(s1):- Returns the length of string s1.
strcmp(s1, s2):- Compares string s1 and s2.
strlwr(s1):- Converts string s1 to lowercase.
strupr(s1):- Converts string s1 to uppercase.
strchr(s1, c):- Mainly used to return a pointer to the first occurrence of character c in s1.
strstr(s1, s2):- Used to return a pointer to the first occurrence of s2 in string s1.
strrev(s1):- Reverse the string s1.
strncmp(s1, s2, n):- It returns greater than 0 if s1>s2. And it returns less than 0 if s1<s2. It returns 0 if the first n characters of s1 is equal to the first n characters of s2.
strncpy(s1, s2, n):- Copies the first n characters of s2 to s1.
strncat(s1, s2, n):– Concatenates first n characters of s2 to the end of s1.