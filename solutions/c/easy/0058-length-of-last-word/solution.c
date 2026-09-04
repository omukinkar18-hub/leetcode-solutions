int lengthOfLastWord(char* s) {
    int sze=0;
    while(s[sze]!='\0')
        sze++;
    int i=0;
    sze--;
    while(s[sze]==' ')
        sze--;
    while(s[sze--]!=' ')
    {
        i++;
        if(sze<0)
            break;
    }

return i;
}
