//first main function
int main(){
	printf("Hello ESPL\n");
	printf("This is a new print\n");
	unsigned int num;
	char word[256],run = 'y';
	while (run == 'y'){
		printf("Please enter a number above 0: ");
		scanf(" %d",&num);
		strcpy(word,num_to_words(num));
		printf("Result: %s\n",word);
		printf("Try another number? y/n: ");
		scanf(" %c",&run);
	}
	printf("Good Bye!\n");
	return 0;
}
