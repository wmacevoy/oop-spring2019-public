/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.wmacevoy.marker;

import java.util.ArrayList;

/**
 *
 * @author wmacevoy
 */
public class SwissArmyWritingUtensil implements WritingUtensil  {
    private ArrayList < WritingUtensil > contents = new ArrayList < WritingUtensil >();
    public void addWritingUtensil(WritingUtensil wu) { contents.add(wu); }
    private int choice = 0;
    public void choose(int choice) {
        this.choice = choice;
    }
    public WritingUtensil current() {
        return contents.get(choice);
    }

    public Color getColor() {
        return current().getColor();
    }

    public void setColor(Color color) {
        current().setColor(color);
    }
    
    public void draw() throws BadWriteException {
            current().write();
    }
    
    @Override
    public void write() throws BadWriteException {
        draw();
    }
}
