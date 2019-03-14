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
public class SwissArmyWritingUtensilTest {
    
    public SwissArmyWritingUtensilTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }
    
    /**
     * Test of addWritingUtensil method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testShuttleMarker() throws BadWriteException {
        System.out.println("testShuttleMarker");
        ShuttleMarker sm = new ShuttleMarker();
        sm.choose(3);
        sm.write();
    }

    /**
     * Test of choose method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testChoose() {
        System.out.println("choose");
        int choice = 0;
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        instance.choose(choice);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of current method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testCurrent() {
        System.out.println("current");
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        WritingUtensil expResult = null;
        WritingUtensil result = instance.current();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of getColor method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testGetColor() {
        System.out.println("getColor");
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        Color expResult = null;
        Color result = instance.getColor();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of setColor method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testSetColor() {
        System.out.println("setColor");
        Color color = null;
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        instance.setColor(color);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of draw method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testDraw() throws Exception {
        System.out.println("draw");
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        instance.draw();
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }

    /**
     * Test of write method, of class SwissArmyWritingUtensil.
     */
    @Test
    public void testWrite() throws Exception {
        System.out.println("write");
        SwissArmyWritingUtensil instance = new SwissArmyWritingUtensil();
        instance.write();
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
    
}
