package tp3;

import java.awt.Color;
import java.awt.Component;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.Timer;
import javax.swing.WindowConstants;

interface Observer {
    void update(ActionEvent event);
}

class Cycles implements ActionListener {
    private Timer timer;
    private List<Observer> observers = new ArrayList<>();
    private JFrame frame;

    public Cycles(int delay) {
        timer = new Timer(delay, this);

        addObserver(new EspaceCouleur());
        addObserver(new CompteurPub());

        frame = new JFrame("Publicité");
        frame.setLayout(new GridLayout(2, 1));
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        for (Observer observer : observers) {
            frame.add((Component) observer);
        }

        frame.pack();
        frame.setSize(800, 600);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    public void start() {
        timer.start();
    }

    @Override
    public void actionPerformed(ActionEvent event) {
        System.out.println("Top Timer !");
        notifyObservers(event);
    }

    public void addObserver(Observer observer) {
        observers.add(observer);
    }

    public void removeObserver(Observer observer) {
        observers.remove(observer);
    }

    private void notifyObservers(ActionEvent event) {
        for (Observer observer : observers) {
            observer.update(event);
        }
    }
}

class EspaceCouleur extends JPanel implements Observer {
    /**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private Color couleur;

    public EspaceCouleur() {
        couleur = Color.black;
    }

    @Override
    public void update(ActionEvent event) {
        // Modifier la couleur (passer de noir à bleu puis de bleu à noir)
        if (couleur.equals(Color.black)) {
            couleur = Color.blue;
        } else {
            couleur = Color.black;
        }
        setBackground(couleur);
    }
}

class CompteurPub extends JLabel implements Observer {
    /**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private int nombreCycles = 0;

    public CompteurPub() {
        setText("Nombre de pub présentées : 0");
    }

    @Override
    public void update(ActionEvent event) {
        // Incrémenter le compteur et mettre à jour le texte
        nombreCycles++;
        setText("Nombre de pub présentées : " + nombreCycles);
    }
}

public class Main {
    public static void main(String[] args) {
            Cycles cycles = new Cycles(2000);
            cycles.start();
    }
}
