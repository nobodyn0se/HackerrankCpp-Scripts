

// Write your Student class here
class Student{
    private:
        int scores[5];
        int total = 0;
    public:
        void input() {
        for(int i=0; i<5; i++)
            cin >> scores[i];
        }

        int calculateTotalScore() {
            for(int i =0; i<5; i++) 
                total += scores[i];
            return(total);
        }

};

