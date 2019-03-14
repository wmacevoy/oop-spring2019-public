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
public class ShuttleMarker extends SwissArmyWritingUtensil {
    ShuttleMarker() {
        for (Color color : Color.values()) {
            Marker marker = new Marker(color);
            marker.setCapped(false);
            addWritingUtensil(marker);
        }
    }
}
