/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package net.asam.openscenario.v1_0.parser.xml;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.PositionImpl;
import net.asam.openscenario.v1_0.impl.TrafficDefinitionImpl;
import net.asam.openscenario.v1_0.impl.TrafficSinkActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSinkActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSinkActionXmlParser extends XmlComplexTypeParser<TrafficSinkActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TrafficSinkActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TrafficSinkActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TrafficSinkActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__RATE,
        new IAttributeParser<TrafficSinkActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSinkActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSinkActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSinkActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__RATE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setRate(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__RATE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__RATE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__RADIUS,
        new IAttributeParser<TrafficSinkActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSinkActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSinkActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSinkActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__RADIUS, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setRadius(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__RADIUS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__RADIUS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<TrafficSinkActionImpl> {
    /**
     * Constructor
     *
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
    public SubElementParser(IParserMessageLogger messageLogger, String filename) {
      super(messageLogger, filename);
    }
    /*
     * Creates a list of parser
     */
    @Override
    protected List<IElementParser<TrafficSinkActionImpl>> createParserList() {
      List<IElementParser<TrafficSinkActionImpl>> result = new ArrayList<>();
      result.add(new SubElementPositionParser());
      result.add(new SubElementTrafficDefinitionParser());
      return result;
    }
  }
  /** A parser for subelement position */
  @SuppressWarnings("synthetic-access")
  private class SubElementPositionParser implements IElementParser<TrafficSinkActionImpl> {

    /** Constructor */
    public SubElementPositionParser() {
      super();
      this.positionXmlParser =
          new PositionXmlParser(
              TrafficSinkActionXmlParser.this.messageLogger,
              TrafficSinkActionXmlParser.this.filename);
    }

    private PositionXmlParser positionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficSinkActionImpl object) {
      PositionImpl position = new PositionImpl();
      // Setting the parent
      position.setParent(object);
      this.positionXmlParser.parseElement(indexedElement, parserContext, position);

      object.setPosition(position);
    }

    @Override
    public int getMinOccur() {
      return 1;
    }

    @Override
    public int getMaxOccur() {
      return 1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__POSITION};
    }
  }
  /** A parser for subelement trafficDefinition */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrafficDefinitionParser implements IElementParser<TrafficSinkActionImpl> {

    /** Constructor */
    public SubElementTrafficDefinitionParser() {
      super();
      this.trafficDefinitionXmlParser =
          new TrafficDefinitionXmlParser(
              TrafficSinkActionXmlParser.this.messageLogger,
              TrafficSinkActionXmlParser.this.filename);
    }

    private TrafficDefinitionXmlParser trafficDefinitionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficSinkActionImpl object) {
      TrafficDefinitionImpl trafficDefinition = new TrafficDefinitionImpl();
      // Setting the parent
      trafficDefinition.setParent(object);
      this.trafficDefinitionXmlParser.parseElement(
          indexedElement, parserContext, trafficDefinition);

      object.setTrafficDefinition(trafficDefinition);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return 1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__TRAFFIC_DEFINITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAFFIC_DEFINITION};
    }
  }
}
