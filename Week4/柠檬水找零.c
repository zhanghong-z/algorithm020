bool lemonadeChange(int* bills, int billsSize){
    int fives = 0, tens = 0;
    for (int i = 0; i < billsSize; i++) {
        int bill = bills[i];
        if (bill == 5) {
            fives++;
        }
        else if (bill == 10) {
            if (fives == 0) {
                return false;
            }
            tens++;
            fives--;
        }
        else {
            if (fives >= 1 && tens >= 1) {
                tens--;
                fives--;
            }
            else if (fives >= 3) {
                fives -= 3;
            }
            else {
                return false;
            }
        }
    }
    return true;
}