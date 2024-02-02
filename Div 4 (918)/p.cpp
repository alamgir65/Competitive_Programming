bool isPerfectSquare(int number) {
    int sqrtNum = sqrt(number);
    return sqrtNum * sqrtNum == number;
}