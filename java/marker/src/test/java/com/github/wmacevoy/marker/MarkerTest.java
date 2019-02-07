/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.wmacevoy.marker;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author wmacevoy
 */
public class MarkerTest {
    
    public MarkerTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    Marker blackMarker;
    Marker redMarker;
    
    @Before
    public void setUp() {
        blackMarker = new Marker(Color.BLACK);
        redMarker = new Marker(Color.RED);
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of getColor method, of class Marker.
     */
    @Test
    public void testGetColor() {
        System.out.println("getColor");
        assertEquals(Color.BLACK,blackMarker.getColor());
        assertEquals(Color.RED,redMarker.getColor());
    }

    /**
     * Test of setColor method, of class Marker.
     */
    @Test
    public void testSetColor() {
        System.out.println("setColor");
        Color color = Color.GREEN;
        assertNotEquals(color,blackMarker.getColor());
        blackMarker.setColor(color);
        assertEquals(color,blackMarker.getColor());
    }

    /**
     * Test of isCapped method, of class Marker.
     */
    @Test
    public void testIsCapped() {
        System.out.println("isCapped");
        Marker instance = null;
        boolean expResult = false;
        boolean result = instance.isCapped();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of setCapped method, of class Marker.
     */
    @Test
    public void testSetCapped() {
        System.out.println("setCapped");
        boolean capped = false;
        Marker instance = null;
        instance.setCapped(capped);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of draw method, of class Marker.
     * @throws java.lang.Exception
     */
    @Test
    public void testDrawUncappedOk() throws Exception {
        System.out.println("drawUncappedOk");
        blackMarker.setCapped(false);
        blackMarker.draw();
    }

    @Test(expected = BadMarkerState.class)
    public void testDrawCappedBad() throws Exception {
        System.out.println("drawUncappedOk");
        blackMarker.setCapped(true);
        blackMarker.draw();
    }
    
}
