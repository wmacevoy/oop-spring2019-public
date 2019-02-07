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
public class Marker {
    private Color color;
    private boolean capped;
    
    public Marker(Color color) {
        this.color = color;
        this.capped = true;
    }

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public boolean isCapped() {
        return capped;
    }

    public void setCapped(boolean capped) {
        this.capped = capped;
    }
    
    public void draw() throws BadMarkerState {
        if (!isCapped()) {
            System.out.println("drawing in " + getColor());
        } else {
            throw BAD_MARKER_CAPPED_DRAW;
        }
    }
    
    static public BadMarkerState BAD_MARKER_CAPPED_DRAW
            = new BadMarkerState("drawing with capped marker is bad");
    
}
