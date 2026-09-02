#include<stdlib.h>
#include<string.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    if(strs[0][0]=='/0'|| strsSize==0)
    return "";

    char* pre = (char*)malloc(strlen(strs[0]) + 1);
    strcpy(pre, strs[0]);

    for(int i=0;i<strsSize;i++)
    {
        int j=0;
        while(pre[j]==strs[i][j] && pre[j]!='\0')
            j++;

        pre[j]='\0';
        if(pre[0]=='\0')
            break;
    }
    return pre;
}
