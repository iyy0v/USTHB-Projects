package tp4;

import java.util.Scanner;

class Context {
    private Traitement[] operations;

    public Context(Traitement[] operations) {
        this.operations = operations;
    }

    public int executeStrategy(int operationIndex, int a, int b) {

        return operations[operationIndex].execute(a, b);
    }
}

public class STATRREGEY_EXample {
    public static void main(String[] args) {
        System.out.println("TP MPDL");

        Traitement[] operations = {
            new Addition(),
            new Soustraction(),
            new Multipication()
        };

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of a: ");
        int a = scanner.nextInt();
        System.out.print("Enter the value of b: ");
        int b = scanner.nextInt();

        System.out.println("Choose operation:");
        System.out.println("0. Addition");
        System.out.println("1. Subtraction");
        System.out.println("2. Multiplication");

        System.out.print("Enter operation choice (0-2): ");
        int choice = scanner.nextInt();


        Context context = new Context(operations);
        int resultAddition = context.executeStrategy(choice, a, b);
        System.out.println("resultat: " + resultAddition);


        scanner.close();
    }
}