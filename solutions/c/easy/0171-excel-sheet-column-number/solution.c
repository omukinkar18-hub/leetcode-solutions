int titleToNumber(char* columnTitle) {
    int col=0,j=0;
    int i=strlen(columnTitle)/sizeof(char);
    while(i!=0)
    {
        col+=pow(26,i-1)*(columnTitle[j]-'A'+1);
        j++;i--;
    }
    return col;
}
