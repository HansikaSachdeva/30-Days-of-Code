class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores): Person(firstName, lastName, id){
            this->testScores = scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int sum=0, i;
            for(i=0; i<testScores.size(); i++)
            sum+=testScores[i];
        int averageScore = sum/testScores.size();
        if (averageScore <= 100 && averageScore >= 90) 
            return 'O';
        else if (averageScore < 90 && averageScore >= 80) 
            return 'E';
        else if (averageScore < 80 && averageScore >= 70) 
            return 'A';
        else if (averageScore < 70 && averageScore >= 55) 
            return 'P';
        else if (averageScore < 55 && averageScore >= 40) 
            return 'D';
         return 'T';
        
        }
};

