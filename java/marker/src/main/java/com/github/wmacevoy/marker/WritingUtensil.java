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
public interface WritingUtensil {
    static final Color DEFAULT_COLOR = Color.BLACK;
    Color getColor(); 
    void setColor(Color color);
    void write() throws BadWriteException;
}
