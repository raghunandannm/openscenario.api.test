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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.PropertiesImpl;
import net.asam.openscenario.v1_0.impl.RoadConditionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadConditionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoadConditionXmlParser extends XmlComplexTypeParser<RoadConditionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public RoadConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<RoadConditionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RoadConditionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR,
        new IAttributeParser<RoadConditionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RoadConditionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RoadConditionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RoadConditionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setFrictionScaleFactor(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(
                OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<RoadConditionImpl> {
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
    protected List<IElementParser<RoadConditionImpl>> createParserList() {
      List<IElementParser<RoadConditionImpl>> result = new ArrayList<>();
      result.add(new SubElementPropertiesParser());
      return result;
    }
  }
  /** A parser for subelement properties */
  @SuppressWarnings("synthetic-access")
  private class SubElementPropertiesParser implements IElementParser<RoadConditionImpl> {

    /** Constructor */
    public SubElementPropertiesParser() {
      super();
      this.propertiesXmlParser =
          new PropertiesXmlParser(
              RoadConditionXmlParser.this.messageLogger, RoadConditionXmlParser.this.filename);
    }

    private PropertiesXmlParser propertiesXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoadConditionImpl object) {
      PropertiesImpl properties = new PropertiesImpl();
      // Setting the parent
      properties.setParent(object);
      this.propertiesXmlParser.parseElement(indexedElement, parserContext, properties);

      object.setProperties(properties);
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
      return elementName.equals(OscConstants.ELEMENT__PROPERTIES);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PROPERTIES};
    }
  }
}
