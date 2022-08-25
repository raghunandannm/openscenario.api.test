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
 
#include "XmlParsersV1_0.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContextV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a SpeedActionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedActionTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedActionTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedActionTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetSpeedParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementAbsoluteTargetSpeedParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::SubElementRelativeTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeTargetSpeedXmlParser = std::make_shared<RelativeTargetSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeTargetSpeed = std::make_shared<RelativeTargetSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionTargetImpl>(object);                    
            // Setting the parent
            relativeTargetSpeed->SetParent(object);
            _relativeTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, relativeTargetSpeed);

            typedObject->SetRelativeTargetSpeed(relativeTargetSpeed);
        }
        
        int SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED ;
        }

        std::vector<std::string> SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED
                    };
        }
        SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::SubElementAbsoluteTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _absoluteTargetSpeedXmlParser = std::make_shared<AbsoluteTargetSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto absoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionTargetImpl>(object);                    
            // Setting the parent
            absoluteTargetSpeed->SetParent(object);
            _absoluteTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetSpeed);

            typedObject->SetAbsoluteTargetSpeed(absoluteTargetSpeed);
        }
        
        int SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED ;
        }

        std::vector<std::string> SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED
                    };
        }
  
        SpeedActionTargetXmlParser::SpeedActionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a SpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SpeedConditionXmlParser::SpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a StandStillConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StandStillConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StandStillConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDuration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<StandStillConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDuration(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StandStillConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        StandStillConditionXmlParser::StandStillConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a StoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<StoryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementActsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StoryXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<StoryImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int StoryXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int StoryXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> StoryXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        StoryXmlParser::SubElementActsParser::SubElementActsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _actXmlParser = std::make_shared<ActXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryXmlParser::SubElementActsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto acts = std::make_shared<ActImpl>();
            auto typedObject = std::static_pointer_cast<StoryImpl>(object);                    
            // Setting the parent
            acts->SetParent(object);
            _actXmlParser->ParseElement(indexedElement, parserContext, acts);
            auto actsList = typedObject->GetWriterActs();
            actsList.push_back(acts);
            typedObject->SetActs(actsList);
        }
        
        int StoryXmlParser::SubElementActsParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryXmlParser::SubElementActsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryXmlParser::SubElementActsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACT ;
        }

        std::vector<std::string> StoryXmlParser::SubElementActsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACT
                    };
        }
  
        StoryXmlParser::StoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a StoryboardImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryboardXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryboardXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementInitParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementStoriesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementStopTriggerParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StoryboardXmlParser::SubElementInitParser::SubElementInitParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _initXmlParser = std::make_shared<InitXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementInitParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto init = std::make_shared<InitImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            init->SetParent(object);
            _initXmlParser->ParseElement(indexedElement, parserContext, init);

            typedObject->SetInit(init);
        }
        
        int StoryboardXmlParser::SubElementInitParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryboardXmlParser::SubElementInitParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StoryboardXmlParser::SubElementInitParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__INIT ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementInitParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__INIT
                    };
        }
        StoryboardXmlParser::SubElementStoriesParser::SubElementStoriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _storyXmlParser = std::make_shared<StoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementStoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stories = std::make_shared<StoryImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            stories->SetParent(object);
            _storyXmlParser->ParseElement(indexedElement, parserContext, stories);
            auto storiesList = typedObject->GetWriterStories();
            storiesList.push_back(stories);
            typedObject->SetStories(storiesList);
        }
        
        int StoryboardXmlParser::SubElementStoriesParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryboardXmlParser::SubElementStoriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryboardXmlParser::SubElementStoriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STORY ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementStoriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STORY
                    };
        }
        StoryboardXmlParser::SubElementStopTriggerParser::SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementStopTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stopTrigger = std::make_shared<TriggerImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            stopTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, stopTrigger);

            typedObject->SetStopTrigger(stopTrigger);
        }
        
        int StoryboardXmlParser::SubElementStopTriggerParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryboardXmlParser::SubElementStopTriggerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StoryboardXmlParser::SubElementStopTriggerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STOP_TRIGGER ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementStopTriggerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STOP_TRIGGER
                    };
        }
  
        StoryboardXmlParser::StoryboardXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardElementStateConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryboardElementStateConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementState::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementState::UNKNOWN)
                        {
                            typedObject->SetState(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename, _parserOptions)));
            class AttributeStoryboardElementRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStoryboardElementRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IStoryboardElement>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetStoryboardElementRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<AttributeStoryboardElementRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeStoryboardElementType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStoryboardElementType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementType::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementType::UNKNOWN)
                        {
                            typedObject->SetStoryboardElementType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<AttributeStoryboardElementType>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryboardElementStateConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        StoryboardElementStateConditionXmlParser::StoryboardElementStateConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a SunImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SunXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SunXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAzimuth: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAzimuth(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAzimuth(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<AttributeAzimuth>(_messageLogger, _filename, _parserOptions)));
            class AttributeElevation: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeElevation(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetElevation(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<AttributeElevation>(_messageLogger, _filename, _parserOptions)));
            class AttributeIntensity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SunXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SunXmlParser::SunXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a SynchronizeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SynchronizeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SynchronizeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMasterEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMasterEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetMasterEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<AttributeMasterEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SynchronizeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTargetPositionMasterParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTargetPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementFinalSpeedParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::SubElementTargetPositionMasterParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetPositionMaster = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            targetPositionMaster->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPositionMaster);

            typedObject->SetTargetPositionMaster(targetPositionMaster);
        }
        
        int SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetMinOccur() 
        {
            return 1;
        }

        int SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER
                    };
        }
        SynchronizeActionXmlParser::SubElementTargetPositionParser::SubElementTargetPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetPosition = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            targetPosition->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPosition);

            typedObject->SetTargetPosition(targetPosition);
        }
        
        int SynchronizeActionXmlParser::SubElementTargetPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int SynchronizeActionXmlParser::SubElementTargetPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementTargetPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementTargetPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_POSITION
                    };
        }
        SynchronizeActionXmlParser::SubElementFinalSpeedParser::SubElementFinalSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _finalSpeedXmlParser = std::make_shared<FinalSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementFinalSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto finalSpeed = std::make_shared<FinalSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            finalSpeed->SetParent(object);
            _finalSpeedXmlParser->ParseElement(indexedElement, parserContext, finalSpeed);

            typedObject->SetFinalSpeed(finalSpeed);
        }
        
        int SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementFinalSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FINAL_SPEED ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FINAL_SPEED
                    };
        }
  
        SynchronizeActionXmlParser::SynchronizeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TeleportActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TeleportActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TeleportActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TeleportActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TeleportActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TeleportActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<TeleportActionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int TeleportActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TeleportActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TeleportActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TeleportActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        TeleportActionXmlParser::TeleportActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeHeadwayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeHeadwayConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeHeadwayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAlongRoute: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeHeadwayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAlongRoute(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeHeadwayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeHeadwayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeHeadwayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeHeadwayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeHeadwayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TimeHeadwayConditionXmlParser::TimeHeadwayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeOfDayImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeOfDayXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeOfDayXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAnimation: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAnimation(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeOfDayImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAnimation(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<AttributeAnimation>(_messageLogger, _filename, _parserOptions)));
            class AttributeDateTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDateTime(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeOfDayImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDateTime(ParseDateTime(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<AttributeDateTime>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeOfDayXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TimeOfDayXmlParser::TimeOfDayXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeOfDayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeOfDayConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeOfDayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDateTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDateTime(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeOfDayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDateTime(ParseDateTime(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<AttributeDateTime>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeOfDayConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeOfDayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TimeOfDayConditionXmlParser::TimeOfDayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeReferenceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeReferenceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeReferenceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementNoneParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTimingParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TimeReferenceXmlParser::SubElementNoneParser::SubElementNoneParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _noneXmlParser = std::make_shared<NoneXmlParser>(messageLogger, filename, parserOptions);
        }

        void TimeReferenceXmlParser::SubElementNoneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto none = std::make_shared<NoneImpl>();
            auto typedObject = std::static_pointer_cast<TimeReferenceImpl>(object);                    
            // Setting the parent
            none->SetParent(object);
            _noneXmlParser->ParseElement(indexedElement, parserContext, none);

            typedObject->SetNone(none);
        }
        
        int TimeReferenceXmlParser::SubElementNoneParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeReferenceXmlParser::SubElementNoneParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeReferenceXmlParser::SubElementNoneParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__NONE ;
        }

        std::vector<std::string> TimeReferenceXmlParser::SubElementNoneParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__NONE
                    };
        }
        TimeReferenceXmlParser::SubElementTimingParser::SubElementTimingParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _timingXmlParser = std::make_shared<TimingXmlParser>(messageLogger, filename, parserOptions);
        }

        void TimeReferenceXmlParser::SubElementTimingParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timing = std::make_shared<TimingImpl>();
            auto typedObject = std::static_pointer_cast<TimeReferenceImpl>(object);                    
            // Setting the parent
            timing->SetParent(object);
            _timingXmlParser->ParseElement(indexedElement, parserContext, timing);

            typedObject->SetTiming(timing);
        }
        
        int TimeReferenceXmlParser::SubElementTimingParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeReferenceXmlParser::SubElementTimingParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeReferenceXmlParser::SubElementTimingParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIMING ;
        }

        std::vector<std::string> TimeReferenceXmlParser::SubElementTimingParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIMING
                    };
        }
  
        TimeReferenceXmlParser::TimeReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeToCollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeToCollisionConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeToCollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAlongRoute: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeToCollisionConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAlongRoute(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename, _parserOptions)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeToCollisionConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeToCollisionConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimeToCollisionConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeToCollisionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTimeToCollisionConditionTargetParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::SubElementTimeToCollisionConditionTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _timeToCollisionConditionTargetXmlParser = std::make_shared<TimeToCollisionConditionTargetXmlParser>(messageLogger, filename, parserOptions);
        }

        void TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTargetImpl>();
            auto typedObject = std::static_pointer_cast<TimeToCollisionConditionImpl>(object);                    
            // Setting the parent
            timeToCollisionConditionTarget->SetParent(object);
            _timeToCollisionConditionTargetXmlParser->ParseElement(indexedElement, parserContext, timeToCollisionConditionTarget);

            typedObject->SetTimeToCollisionConditionTarget(timeToCollisionConditionTarget);
        }
        
        int TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetMinOccur() 
        {
            return 1;
        }

        int TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET ;
        }

        std::vector<std::string> TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET
                    };
        }
  
        TimeToCollisionConditionXmlParser::TimeToCollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeToCollisionConditionTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TimeToCollisionConditionTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimeToCollisionConditionTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<TimeToCollisionConditionTargetImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename, parserOptions);
        }

        void TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<TimeToCollisionConditionTargetImpl>(object);                    
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);

            typedObject->SetEntityRef(entityRef);
        }
        
        int TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        TimeToCollisionConditionTargetXmlParser::TimeToCollisionConditionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TimingImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimingXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TimingXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDomainAbsoluteRelative: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDomainAbsoluteRelative(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimingImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ReferenceContext::GetFromLiteral(attributeValue);
                        if (kResult != ReferenceContext::UNKNOWN)
                        {
                            typedObject->SetDomainAbsoluteRelative(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<AttributeDomainAbsoluteRelative>(_messageLogger, _filename, _parserOptions)));
            class AttributeOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimingImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename, _parserOptions)));
            class AttributeScale: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeScale(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TimingImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SCALE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetScale(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<AttributeScale>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TimingXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TimingXmlParser::TimingXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTrafficSourceActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficSinkActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficSwarmActionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficActionXmlParser::SubElementTrafficSourceActionParser::SubElementTrafficSourceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSourceActionXmlParser = std::make_shared<TrafficSourceActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficActionXmlParser::SubElementTrafficSourceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSourceAction = std::make_shared<TrafficSourceActionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficActionImpl>(object);                    
            // Setting the parent
            trafficSourceAction->SetParent(object);
            _trafficSourceActionXmlParser->ParseElement(indexedElement, parserContext, trafficSourceAction);

            typedObject->SetTrafficSourceAction(trafficSourceAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSourceActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION
                    };
        }
        TrafficActionXmlParser::SubElementTrafficSinkActionParser::SubElementTrafficSinkActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSinkActionXmlParser = std::make_shared<TrafficSinkActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficActionXmlParser::SubElementTrafficSinkActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSinkAction = std::make_shared<TrafficSinkActionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficActionImpl>(object);                    
            // Setting the parent
            trafficSinkAction->SetParent(object);
            _trafficSinkActionXmlParser->ParseElement(indexedElement, parserContext, trafficSinkAction);

            typedObject->SetTrafficSinkAction(trafficSinkAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSinkActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION
                    };
        }
        TrafficActionXmlParser::SubElementTrafficSwarmActionParser::SubElementTrafficSwarmActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSwarmActionXmlParser = std::make_shared<TrafficSwarmActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficActionXmlParser::SubElementTrafficSwarmActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSwarmAction = std::make_shared<TrafficSwarmActionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficActionImpl>(object);                    
            // Setting the parent
            trafficSwarmAction->SetParent(object);
            _trafficSwarmActionXmlParser->ParseElement(indexedElement, parserContext, trafficSwarmAction);

            typedObject->SetTrafficSwarmAction(trafficSwarmAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSwarmActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION
                    };
        }
  
        TrafficActionXmlParser::TrafficActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficDefinitionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficDefinitionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementVehicleCategoryDistributionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementControllerDistributionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::SubElementVehicleCategoryDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _vehicleCategoryDistributionXmlParser = std::make_shared<VehicleCategoryDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vehicleCategoryDistribution = std::make_shared<VehicleCategoryDistributionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficDefinitionImpl>(object);                    
            // Setting the parent
            vehicleCategoryDistribution->SetParent(object);
            _vehicleCategoryDistributionXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistribution);

            typedObject->SetVehicleCategoryDistribution(vehicleCategoryDistribution);
        }
        
        int TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION ;
        }

        std::vector<std::string> TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION
                    };
        }
        TrafficDefinitionXmlParser::SubElementControllerDistributionParser::SubElementControllerDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _controllerDistributionXmlParser = std::make_shared<ControllerDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficDefinitionXmlParser::SubElementControllerDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controllerDistribution = std::make_shared<ControllerDistributionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficDefinitionImpl>(object);                    
            // Setting the parent
            controllerDistribution->SetParent(object);
            _controllerDistributionXmlParser->ParseElement(indexedElement, parserContext, controllerDistribution);

            typedObject->SetControllerDistribution(controllerDistribution);
        }
        
        int TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficDefinitionXmlParser::SubElementControllerDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION ;
        }

        std::vector<std::string> TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION
                    };
        }
  
        TrafficDefinitionXmlParser::TrafficDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalControllerActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficSignalStateActionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::SubElementTrafficSignalControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSignalControllerActionXmlParser = std::make_shared<TrafficSignalControllerActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalControllerAction = std::make_shared<TrafficSignalControllerActionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSignalActionImpl>(object);                    
            // Setting the parent
            trafficSignalControllerAction->SetParent(object);
            _trafficSignalControllerActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalControllerAction);

            typedObject->SetTrafficSignalControllerAction(trafficSignalControllerAction);
        }
        
        int TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION ;
        }

        std::vector<std::string> TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION
                    };
        }
        TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::SubElementTrafficSignalStateActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSignalStateActionXmlParser = std::make_shared<TrafficSignalStateActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalStateAction = std::make_shared<TrafficSignalStateActionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSignalActionImpl>(object);                    
            // Setting the parent
            trafficSignalStateAction->SetParent(object);
            _trafficSignalStateActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalStateAction);

            typedObject->SetTrafficSignalStateAction(trafficSignalStateAction);
        }
        
        int TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION ;
        }

        std::vector<std::string> TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION
                    };
        }
  
        TrafficSignalActionXmlParser::TrafficSignalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetState(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrafficSignalConditionXmlParser::TrafficSignalConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDelay: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDelay(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DELAY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDelay(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<AttributeDelay>(_messageLogger, _filename, _parserOptions)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeReference: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeReference(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetReference(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<AttributeReference>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPhasesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficSignalControllerXmlParser::SubElementPhasesParser::SubElementPhasesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _phaseXmlParser = std::make_shared<PhaseXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSignalControllerXmlParser::SubElementPhasesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto phases = std::make_shared<PhaseImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSignalControllerImpl>(object);                    
            // Setting the parent
            phases->SetParent(object);
            _phaseXmlParser->ParseElement(indexedElement, parserContext, phases);
            auto phasesList = typedObject->GetWriterPhases();
            phasesList.push_back(phases);
            typedObject->SetPhases(phasesList);
        }
        
        int TrafficSignalControllerXmlParser::SubElementPhasesParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalControllerXmlParser::SubElementPhasesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TrafficSignalControllerXmlParser::SubElementPhasesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PHASE ;
        }

        std::vector<std::string> TrafficSignalControllerXmlParser::SubElementPhasesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PHASE
                    };
        }
  
        TrafficSignalControllerXmlParser::TrafficSignalControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributePhase: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePhase(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PHASE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPhase(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<AttributePhase>(_messageLogger, _filename, _parserOptions)));
            class AttributeTrafficSignalControllerRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<ITrafficSignalController>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetTrafficSignalControllerRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<AttributeTrafficSignalControllerRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrafficSignalControllerActionXmlParser::TrafficSignalControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalControllerConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalControllerConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributePhase: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePhase(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PHASE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPhase(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<AttributePhase>(_messageLogger, _filename, _parserOptions)));
            class AttributeTrafficSignalControllerRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalControllerConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<ITrafficSignalController>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetTrafficSignalControllerRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<AttributeTrafficSignalControllerRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalControllerConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrafficSignalControllerConditionXmlParser::TrafficSignalControllerConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalStateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalStateImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetState(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename, _parserOptions)));
            class AttributeTrafficSignalId: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTrafficSignalId(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalStateImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTrafficSignalId(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<AttributeTrafficSignalId>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrafficSignalStateXmlParser::TrafficSignalStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSignalStateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalStateActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSignalStateActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalStateActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSignalStateActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetState(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSignalStateActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrafficSignalStateActionXmlParser::TrafficSignalStateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSinkActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSinkActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSinkActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRadius: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRadius(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSinkActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRadius(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<AttributeRadius>(_messageLogger, _filename, _parserOptions)));
            class AttributeRate: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRate(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSinkActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRate(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<AttributeRate>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSinkActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficSinkActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSinkActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSinkActionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int TrafficSinkActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSinkActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSinkActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TrafficSinkActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSinkActionImpl>(object);                    
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            typedObject->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSinkActionXmlParser::TrafficSinkActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSourceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSourceActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSourceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRadius: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRadius(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSourceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRadius(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<AttributeRadius>(_messageLogger, _filename, _parserOptions)));
            class AttributeRate: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRate(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSourceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRate(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<AttributeRate>(_messageLogger, _filename, _parserOptions)));
            class AttributeVelocity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeVelocity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSourceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetVelocity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<AttributeVelocity>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSourceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficSourceActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSourceActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSourceActionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int TrafficSourceActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSourceActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSourceActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TrafficSourceActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSourceActionImpl>(object);                    
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            typedObject->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSourceActionXmlParser::TrafficSourceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrafficSwarmActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSwarmActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrafficSwarmActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeInnerRadius: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeInnerRadius(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetInnerRadius(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<AttributeInnerRadius>(_messageLogger, _filename, _parserOptions)));
            class AttributeNumberOfVehicles: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeNumberOfVehicles(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetNumberOfVehicles(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<AttributeNumberOfVehicles>(_messageLogger, _filename, _parserOptions)));
            class AttributeOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename, _parserOptions)));
            class AttributeSemiMajorAxis: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSemiMajorAxis(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetSemiMajorAxis(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<AttributeSemiMajorAxis>(_messageLogger, _filename, _parserOptions)));
            class AttributeSemiMinorAxis: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSemiMinorAxis(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetSemiMinorAxis(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<AttributeSemiMinorAxis>(_messageLogger, _filename, _parserOptions)));
            class AttributeVelocity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeVelocity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetVelocity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<AttributeVelocity>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrafficSwarmActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementCentralObjectParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrafficSwarmActionXmlParser::SubElementCentralObjectParser::SubElementCentralObjectParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _centralSwarmObjectXmlParser = std::make_shared<CentralSwarmObjectXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSwarmActionXmlParser::SubElementCentralObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto centralObject = std::make_shared<CentralSwarmObjectImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);                    
            // Setting the parent
            centralObject->SetParent(object);
            _centralSwarmObjectXmlParser->ParseElement(indexedElement, parserContext, centralObject);

            typedObject->SetCentralObject(centralObject);
        }
        
        int TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSwarmActionXmlParser::SubElementCentralObjectParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT ;
        }

        std::vector<std::string> TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT
                    };
        }
        TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<TrafficSwarmActionImpl>(object);                    
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            typedObject->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSwarmActionXmlParser::TrafficSwarmActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrajectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrajectoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeClosed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeClosed(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrajectoryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOSED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetClosed(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<AttributeClosed>(_messageLogger, _filename, _parserOptions)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrajectoryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrajectoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementShapeParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrajectoryXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrajectoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<TrajectoryImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TrajectoryXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        TrajectoryXmlParser::SubElementShapeParser::SubElementShapeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _shapeXmlParser = std::make_shared<ShapeXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrajectoryXmlParser::SubElementShapeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto shape = std::make_shared<ShapeImpl>();
            auto typedObject = std::static_pointer_cast<TrajectoryImpl>(object);                    
            // Setting the parent
            shape->SetParent(object);
            _shapeXmlParser->ParseElement(indexedElement, parserContext, shape);

            typedObject->SetShape(shape);
        }
        
        int TrajectoryXmlParser::SubElementShapeParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryXmlParser::SubElementShapeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryXmlParser::SubElementShapeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SHAPE ;
        }

        std::vector<std::string> TrajectoryXmlParser::SubElementShapeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SHAPE
                    };
        }
  
        TrajectoryXmlParser::TrajectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrajectoryCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> TrajectoryCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrajectoryCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<TrajectoryCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        TrajectoryCatalogLocationXmlParser::TrajectoryCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TrajectoryFollowingModeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryFollowingModeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TrajectoryFollowingModeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeFollowingMode: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFollowingMode(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TrajectoryFollowingModeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = FollowingMode::GetFromLiteral(attributeValue);
                        if (kResult != FollowingMode::UNKNOWN)
                        {
                            typedObject->SetFollowingMode(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<AttributeFollowingMode>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TrajectoryFollowingModeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TrajectoryFollowingModeXmlParser::TrajectoryFollowingModeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TransitionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TransitionDynamicsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TransitionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDynamicsDimension: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDynamicsDimension(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TransitionDynamicsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DynamicsDimension::GetFromLiteral(attributeValue);
                        if (kResult != DynamicsDimension::UNKNOWN)
                        {
                            typedObject->SetDynamicsDimension(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<AttributeDynamicsDimension>(_messageLogger, _filename, _parserOptions)));
            class AttributeDynamicsShape: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDynamicsShape(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TransitionDynamicsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DynamicsShape::GetFromLiteral(attributeValue);
                        if (kResult != DynamicsShape::UNKNOWN)
                        {
                            typedObject->SetDynamicsShape(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<AttributeDynamicsShape>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TransitionDynamicsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TransitionDynamicsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TransitionDynamicsXmlParser::TransitionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TraveledDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TraveledDistanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TraveledDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TraveledDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TraveledDistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        TraveledDistanceConditionXmlParser::TraveledDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TriggerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TriggerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TriggerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TriggerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementConditionGroupsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TriggerXmlParser::SubElementConditionGroupsParser::SubElementConditionGroupsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _conditionGroupXmlParser = std::make_shared<ConditionGroupXmlParser>(messageLogger, filename, parserOptions);
        }

        void TriggerXmlParser::SubElementConditionGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto conditionGroups = std::make_shared<ConditionGroupImpl>();
            auto typedObject = std::static_pointer_cast<TriggerImpl>(object);                    
            // Setting the parent
            conditionGroups->SetParent(object);
            _conditionGroupXmlParser->ParseElement(indexedElement, parserContext, conditionGroups);
            auto conditionGroupsList = typedObject->GetWriterConditionGroups();
            conditionGroupsList.push_back(conditionGroups);
            typedObject->SetConditionGroups(conditionGroupsList);
        }
        
        int TriggerXmlParser::SubElementConditionGroupsParser::GetMinOccur() 
        {
            return 0;
        }

        int TriggerXmlParser::SubElementConditionGroupsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TriggerXmlParser::SubElementConditionGroupsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONDITION_GROUP ;
        }

        std::vector<std::string> TriggerXmlParser::SubElementConditionGroupsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONDITION_GROUP
                    };
        }
  
        TriggerXmlParser::TriggerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a TriggeringEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TriggeringEntitiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> TriggeringEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeTriggeringEntitiesRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTriggeringEntitiesRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<TriggeringEntitiesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = TriggeringEntitiesRule::GetFromLiteral(attributeValue);
                        if (kResult != TriggeringEntitiesRule::UNKNOWN)
                        {
                            typedObject->SetTriggeringEntitiesRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<AttributeTriggeringEntitiesRule>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> TriggeringEntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEntityRefsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        TriggeringEntitiesXmlParser::SubElementEntityRefsParser::SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename, parserOptions);
        }

        void TriggeringEntitiesXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRefs = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<TriggeringEntitiesImpl>(object);                    
            // Setting the parent
            entityRefs->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRefs);
            auto entityRefsList = typedObject->GetWriterEntityRefs();
            entityRefsList.push_back(entityRefs);
            typedObject->SetEntityRefs(entityRefsList);
        }
        
        int TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetMinOccur() 
        {
            return 1;
        }

        int TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TriggeringEntitiesXmlParser::SubElementEntityRefsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        TriggeringEntitiesXmlParser::TriggeringEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a UserDefinedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UserDefinedActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> UserDefinedActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> UserDefinedActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementCustomCommandActionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        UserDefinedActionXmlParser::SubElementCustomCommandActionParser::SubElementCustomCommandActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _customCommandActionXmlParser = std::make_shared<CustomCommandActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void UserDefinedActionXmlParser::SubElementCustomCommandActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto customCommandAction = std::make_shared<CustomCommandActionImpl>();
            auto typedObject = std::static_pointer_cast<UserDefinedActionImpl>(object);                    
            // Setting the parent
            customCommandAction->SetParent(object);
            _customCommandActionXmlParser->ParseElement(indexedElement, parserContext, customCommandAction);

            typedObject->SetCustomCommandAction(customCommandAction);
        }
        
        int UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetMinOccur() 
        {
            return 1;
        }

        int UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool UserDefinedActionXmlParser::SubElementCustomCommandActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION ;
        }

        std::vector<std::string> UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION
                    };
        }
  
        UserDefinedActionXmlParser::UserDefinedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a UserDefinedValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UserDefinedValueConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> UserDefinedValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<UserDefinedValueConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<UserDefinedValueConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<UserDefinedValueConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> UserDefinedValueConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        UserDefinedValueConditionXmlParser::UserDefinedValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VehicleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> VehicleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VehicleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeVehicleCategory: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeVehicleCategory(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VehicleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = VehicleCategory::GetFromLiteral(attributeValue);
                        if (kResult != VehicleCategory::UNKNOWN)
                        {
                            typedObject->SetVehicleCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<AttributeVehicleCategory>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VehicleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementPerformanceParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementAxlesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        VehicleXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<VehicleImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int VehicleXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int VehicleXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool VehicleXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> VehicleXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        VehicleXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            auto typedObject = std::static_pointer_cast<VehicleImpl>(object);                    
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            typedObject->SetBoundingBox(boundingBox);
        }
        
        int VehicleXmlParser::SubElementBoundingBoxParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementBoundingBoxParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementBoundingBoxParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementBoundingBoxParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                    };
        }
        VehicleXmlParser::SubElementPerformanceParser::SubElementPerformanceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _performanceXmlParser = std::make_shared<PerformanceXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleXmlParser::SubElementPerformanceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto performance = std::make_shared<PerformanceImpl>();
            auto typedObject = std::static_pointer_cast<VehicleImpl>(object);                    
            // Setting the parent
            performance->SetParent(object);
            _performanceXmlParser->ParseElement(indexedElement, parserContext, performance);

            typedObject->SetPerformance(performance);
        }
        
        int VehicleXmlParser::SubElementPerformanceParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementPerformanceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementPerformanceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PERFORMANCE ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementPerformanceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PERFORMANCE
                    };
        }
        VehicleXmlParser::SubElementAxlesParser::SubElementAxlesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _axlesXmlParser = std::make_shared<AxlesXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleXmlParser::SubElementAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto axles = std::make_shared<AxlesImpl>();
            auto typedObject = std::static_pointer_cast<VehicleImpl>(object);                    
            // Setting the parent
            axles->SetParent(object);
            _axlesXmlParser->ParseElement(indexedElement, parserContext, axles);

            typedObject->SetAxles(axles);
        }
        
        int VehicleXmlParser::SubElementAxlesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementAxlesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementAxlesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__AXLES ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementAxlesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__AXLES
                    };
        }
        VehicleXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            auto typedObject = std::static_pointer_cast<VehicleImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            typedObject->SetProperties(properties);
        }
        
        int VehicleXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        VehicleXmlParser::VehicleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VehicleCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> VehicleCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VehicleCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        VehicleCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<VehicleCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        VehicleCatalogLocationXmlParser::VehicleCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCategoryDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> VehicleCategoryDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VehicleCategoryDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementVehicleCategoryDistributionEntriesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::SubElementVehicleCategoryDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _vehicleCategoryDistributionEntryXmlParser = std::make_shared<VehicleCategoryDistributionEntryXmlParser>(messageLogger, filename, parserOptions);
        }

        void VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vehicleCategoryDistributionEntries = std::make_shared<VehicleCategoryDistributionEntryImpl>();
            auto typedObject = std::static_pointer_cast<VehicleCategoryDistributionImpl>(object);                    
            // Setting the parent
            vehicleCategoryDistributionEntries->SetParent(object);
            _vehicleCategoryDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistributionEntries);
            auto vehicleCategoryDistributionEntriesList = typedObject->GetWriterVehicleCategoryDistributionEntries();
            vehicleCategoryDistributionEntriesList.push_back(vehicleCategoryDistributionEntries);
            typedObject->SetVehicleCategoryDistributionEntries(vehicleCategoryDistributionEntriesList);
        }
        
        int VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY ;
        }

        std::vector<std::string> VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY
                    };
        }
  
        VehicleCategoryDistributionXmlParser::VehicleCategoryDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCategoryDistributionEntryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> VehicleCategoryDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeCategory: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCategory(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VehicleCategoryDistributionEntryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = VehicleCategory::GetFromLiteral(attributeValue);
                        if (kResult != VehicleCategory::UNKNOWN)
                        {
                            typedObject->SetCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<AttributeCategory>(_messageLogger, _filename, _parserOptions)));
            class AttributeWeight: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VehicleCategoryDistributionEntryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetWeight(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VehicleCategoryDistributionEntryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        VehicleCategoryDistributionEntryXmlParser::VehicleCategoryDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VertexImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VertexXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> VertexXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VertexImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTime(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<AttributeTime>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VertexXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        VertexXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void VertexXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<VertexImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int VertexXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int VertexXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VertexXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> VertexXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        VertexXmlParser::VertexXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a VisibilityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VisibilityActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> VisibilityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeGraphics: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeGraphics(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VisibilityActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetGraphics(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<AttributeGraphics>(_messageLogger, _filename, _parserOptions)));
            class AttributeSensors: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSensors(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VisibilityActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SENSORS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetSensors(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<AttributeSensors>(_messageLogger, _filename, _parserOptions)));
            class AttributeTraffic: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTraffic(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<VisibilityActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTraffic(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<AttributeTraffic>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> VisibilityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        VisibilityActionXmlParser::VisibilityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a WaypointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WaypointXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> WaypointXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRouteStrategy: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRouteStrategy(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WaypointImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RouteStrategy::GetFromLiteral(attributeValue);
                        if (kResult != RouteStrategy::UNKNOWN)
                        {
                            typedObject->SetRouteStrategy(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<AttributeRouteStrategy>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> WaypointXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        WaypointXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void WaypointXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<WaypointImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int WaypointXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int WaypointXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WaypointXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> WaypointXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        WaypointXmlParser::WaypointXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a WeatherImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WeatherXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> WeatherXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeCloudState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCloudState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WeatherImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CloudState::GetFromLiteral(attributeValue);
                        if (kResult != CloudState::UNKNOWN)
                        {
                            typedObject->SetCloudState(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<AttributeCloudState>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> WeatherXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementSunParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementFogParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementPrecipitationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        WeatherXmlParser::SubElementSunParser::SubElementSunParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _sunXmlParser = std::make_shared<SunXmlParser>(messageLogger, filename, parserOptions);
        }

        void WeatherXmlParser::SubElementSunParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto sun = std::make_shared<SunImpl>();
            auto typedObject = std::static_pointer_cast<WeatherImpl>(object);                    
            // Setting the parent
            sun->SetParent(object);
            _sunXmlParser->ParseElement(indexedElement, parserContext, sun);

            typedObject->SetSun(sun);
        }
        
        int WeatherXmlParser::SubElementSunParser::GetMinOccur() 
        {
            return 1;
        }

        int WeatherXmlParser::SubElementSunParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementSunParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SUN ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementSunParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SUN
                    };
        }
        WeatherXmlParser::SubElementFogParser::SubElementFogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _fogXmlParser = std::make_shared<FogXmlParser>(messageLogger, filename, parserOptions);
        }

        void WeatherXmlParser::SubElementFogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto fog = std::make_shared<FogImpl>();
            auto typedObject = std::static_pointer_cast<WeatherImpl>(object);                    
            // Setting the parent
            fog->SetParent(object);
            _fogXmlParser->ParseElement(indexedElement, parserContext, fog);

            typedObject->SetFog(fog);
        }
        
        int WeatherXmlParser::SubElementFogParser::GetMinOccur() 
        {
            return 1;
        }

        int WeatherXmlParser::SubElementFogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementFogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FOG ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementFogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FOG
                    };
        }
        WeatherXmlParser::SubElementPrecipitationParser::SubElementPrecipitationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _precipitationXmlParser = std::make_shared<PrecipitationXmlParser>(messageLogger, filename, parserOptions);
        }

        void WeatherXmlParser::SubElementPrecipitationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto precipitation = std::make_shared<PrecipitationImpl>();
            auto typedObject = std::static_pointer_cast<WeatherImpl>(object);                    
            // Setting the parent
            precipitation->SetParent(object);
            _precipitationXmlParser->ParseElement(indexedElement, parserContext, precipitation);

            typedObject->SetPrecipitation(precipitation);
        }
        
        int WeatherXmlParser::SubElementPrecipitationParser::GetMinOccur() 
        {
            return 1;
        }

        int WeatherXmlParser::SubElementPrecipitationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementPrecipitationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PRECIPITATION ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementPrecipitationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PRECIPITATION
                    };
        }
  
        WeatherXmlParser::WeatherXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a WorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WorldPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> WorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeH: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeH(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__H, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetH(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<AttributeH>(_messageLogger, _filename, _parserOptions)));
            class AttributeP: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeP(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__P, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetP(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<AttributeP>(_messageLogger, _filename, _parserOptions)));
            class AttributeR: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeR(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__R, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetR(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<AttributeR>(_messageLogger, _filename, _parserOptions)));
            class AttributeX: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeX(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__X, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetX(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<AttributeX>(_messageLogger, _filename, _parserOptions)));
            class AttributeY: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeY(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Y, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetY(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<AttributeY>(_messageLogger, _filename, _parserOptions)));
            class AttributeZ: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeZ(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<WorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Z, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetZ(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<AttributeZ>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> WorldPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        WorldPositionXmlParser::WorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

    
    }
}
