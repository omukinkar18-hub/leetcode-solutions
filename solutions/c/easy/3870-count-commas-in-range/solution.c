int countCommas(int n) {
    int commas=0;
    if(n<1000)
        return commas;
    commas++;
    commas+=n-1000;
    return commas;
}
