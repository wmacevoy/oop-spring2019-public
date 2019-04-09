/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.wmacevoy.marker;

/**
 *
 * @author wmacevoy
 */
public class Pencil implements WritingUtensil  {
    private Color color;
    
    public Pencil(Color color) {
        this.color = color;
    }

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        throw new UnsupportedOperationException();
    }
    
    public void draw() {
            System.out.println("sketching in " + getColor());
    }
    
    @Override
    public void write() throws BadMarkerState {
        draw();
    }
}
