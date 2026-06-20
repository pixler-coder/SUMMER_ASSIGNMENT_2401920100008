import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {
        
     
        Compartment[] compartments = new Compartment[10];

        Random random = new Random();
  
  
        for (int i = 0; i < compartments.length; i++) {
            int randNum = random.nextInt(4) + 1;   
            
            
            switch (randNum) {
                case 1:
                    compartments[i] = new FirstClass();
                    System.out.println("Coach " + (i + 1) + " -> FirstClass");
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    System.out.println("Coach " + (i + 1) + " -> Ladies");
                    break;
                case 3:
                    compartments[i] = new General();
                    System.out.println("Coach " + (i + 1) + " -> General");
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    System.out.println("Coach " + (i + 1) + " -> Luggage");
                    break;
            }
        }
        
        System.out.println("\n--- Polymorphic Display of Notices ---\n");
        
        for (int i = 0; i < compartments.length; i++) {
            
            System.out.println("Coach " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}