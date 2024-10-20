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

#include "TestVersionOptionsWithReader.h"

#ifdef SUPPORT_OSC_1_0
#include "TestExamplesV1_0.h"
#include "TestRangeCheckerV1_0.h"
#include "TestFilesV1_0.h"
#include "TestImportsV1_0.h"
#include "TestReaderV1_0.h"
#include "TestSimpleDemosV1_0.h"
#include "TestVersionCheckerV1_0.h"
#include "TestFlexInterfaceV1_0.h"
#include "TestInjectedParametersV1_0.h"
#include "TestWriterApiV1_0.h"
#endif

#ifdef SUPPORT_OSC_1_1
#include <TestParameterValidationV1_1.h>
#include "TestAlksV1_1.h"
#include "TestDeprecatedV1_1.h"
#include "TestExamplesV1_1.h"
#include "TestCardinalityV1_1.h"
#include "TestRangeCheckerV1_1.h"
#include "TestFilesV1_1.h"
#include "TestImportsV1_1.h"
#include "TestReaderV1_1.h"
#include "TestSimpleDemosV1_1.h"
#include "TestVersionCheckerV1_1.h"
#include "TestFlexInterfaceV1_1.h"
#include "TestInjectedParametersV1_1.h"
#include "TestWriterApiV1_1.h"
#endif

#ifdef SUPPORT_OSC_1_2
#include <TestParameterValidationV1_2.h>
#include <TestVariableValidationV1_2.h>
#include <TestDeprecatedValidationV1_2.h>
#include "TestAlksV1_2.h"
#include "TestDeprecatedV1_2.h"
#include "TestExamplesV1_2.h"
#include <TestExamplesOscV1_2.h>
#include "TestRangeCheckerV1_2.h"
#include "TestFilesV1_2.h"
#include "TestImportsV1_2.h"
#include "TestReaderV1_2.h"
#include "TestSimpleDemosV1_2.h"
#include "TestVersionCheckerV1_2.h"
#include "TestFlexInterfaceV1_2.h"
#include "TestInjectedParametersV1_2.h"
#include "TestWriterApiV1_2.h"
#include "TestCardinalityV1_2.h"
#endif

#ifdef SUPPORT_OSC_1_0
bool TestV1_0(std::string basePath)
{
	NET_ASAM_OPENSCENARIO::v1_0::TestExamples testExamples(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestRangeChecker testRangeChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestFiles testFiles(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestImports testImports(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestReader testReader(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestSimpleDemos testSimpleDemos(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestVersionChecker testVersionChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestFlexInterface testFlexInterface(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestInjectedParameters testInjectedParameters(basePath);
	NET_ASAM_OPENSCENARIO::v1_0::TestWriterApi testWriterApi(basePath);

	bool result = true;

	result = testExamples.TestExample() && result;

	result = testRangeChecker.TestParamsFailure() && result;

	result = testFiles.TestSimpleSuccess() && result;
	result = testFiles.TestNonAsciiFilePaths() && result;
	result = testFiles.TestParamsSuccess() && result;
	result = testFiles.TestBomFile() && result;
	result = testFiles.TestParamsFailure() && result;
	result = testFiles.TestParamsConversionInfo() && result;
	result = testFiles.TestParamsConversion() && result;
	result = testFiles.TestUnvalidXml() && result;
	result = testFiles.TestUnknownElement() && result;
	result = testFiles.TestWrongAttributes() && result;
	result = testFiles.TestWrongEndElement() && result;
	result = testFiles.TestCustomCommandAction() && result;
	result = testFiles.TestFileNotFound() && result;

	result = testImports.TestImportSuccess() && result;

	result = testImports.TestImportWithParametersSuccess() && result;

	result = testReader.TestImportSuccess() && result;
	result = testReader.TestImportSuccessNonAsciiFile() && result;
	result = testReader.TestDirectorySuccess() && result;
	result = testReader.TestDirectoryPartlySuccess() && result;
	result = testReader.TestFileNotFound() && result;
	result = testReader.TestDirectoryNotFound() && result;
	result = testReader.TestWithErrors() && result;
	result = testReader.TestWrongCommandLine() && result;
	result = testReader.TestWithParamFile() && result;
	result = testReader.TestWithParamFileSyntaxError() && result;
	result = testReader.TestWithParamFileSyntaxError2() && result;
	result = testReader.TestWithParamFileNotFound() && result;

	result = testSimpleDemos.TestSimpleDemo() && result;
	result = testSimpleDemos.TestImportDemo() && result;
	result = testSimpleDemos.TestCheckerRuleDemo() && result;
	result = testSimpleDemos.TestCheckerRuleEgoDemo() && result;

	result = testVersionChecker.TestSuccess() && result;

	result = testFlexInterface.TestExample() && result;

	result = testInjectedParameters.TestNullInjectedParameters() && result;
	result = testInjectedParameters.TestEmptyInjectedParameters() && result;
	result = testInjectedParameters.TestInjectionsForSuccess() && result;
	result = testInjectedParameters.TestWrongFormats() && result;
	result = testInjectedParameters.TestNotDefined() && result;
	result = testInjectedParameters.TestNotDefinedWithNoGlobalParameters() && result;

	result = testWriterApi.TestSimpleSuccess() && result;
	result = testWriterApi.TestParamsSuccess() && result;
	result = testWriterApi.TestBomFile() && result;

	return result;
}
#endif

#ifdef SUPPORT_OSC_1_1
bool TestV1_1(std::string basePath)
{
    NET_ASAM_OPENSCENARIO::v1_1::TestExamples testExamples(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestRangeChecker testRangeChecker(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestFiles testFiles(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestImports testImports(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestReader testReader(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestSimpleDemos testSimpleDemos(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestVersionChecker testVersionChecker(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestFlexInterface testFlexInterface(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestInjectedParameters testInjectedParameters(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestWriterApi testWriterApi(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestDeprecated testDeprecated(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestAlks testAlks(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestParameterValidation testParametervalidation(basePath);
    NET_ASAM_OPENSCENARIO::v1_1::TestCardinality testCardinality(basePath);

    auto result = true;

    result = testFiles.TestUnicode() && result;

    result = testAlks.TestScenarios() && result;
    result = testInjectedParameters.TestInjectionsForSuccess() && result;
    result = testFiles.TestExpressionsSuccess() && result;
    result = testParametervalidation.TestValidationWrongDataTypes() && result;
    result = testExamples.TestExample() && result;

    result = testRangeChecker.TestParamsFailure() && result;

    result = testFiles.TestMultiChoiceElement() && result;
    result = testFiles.TestSimpleSuccess() && result;
    result = testFiles.TestNonAsciiFilePaths() && result;
    result = testFiles.TestParamsSuccess() && result;

    result = testFiles.TestExpressionsFailure() && result;
    result = testFiles.TestBomFile() && result;
    result = testFiles.TestParamsFailure() && result;
    result = testFiles.TestParamsConversionInfo() && result;
    result = testFiles.TestParamsConversion() && result;
    result = testFiles.TestUnvalidXml() && result;
    result = testFiles.TestUnknownElement() && result;
    result = testFiles.TestWrongAttributes() && result;
    result = testFiles.TestWrongEndElement() && result;
    result = testFiles.TestCustomCommandAction() && result;
    result = testFiles.TestFileNotFound() && result;
    result = testFiles.TestDefaultValues() && result;

    result = testImports.TestImportSuccess() && result;

    result = testImports.TestImportWithParametersSuccess() && result;
    result = testImports.TestImportWithExpressionsSuccess() && result;

    result = testReader.TestImportSuccess() && result;
    result = testReader.TestImportSuccessNonAsciiFile() && result;
    result = testReader.TestDirectorySuccess() && result;
    result = testReader.TestDirectoryPartlySuccess() && result;
    result = testReader.TestFileNotFound() && result;
    result = testReader.TestDirectoryNotFound() && result;
    result = testReader.TestWithErrors() && result;
    result = testReader.TestWrongCommandLine() && result;
    result = testReader.TestWithParamFile() && result;
    result = testReader.TestWithParamFileSyntaxError() && result;
    result = testReader.TestWithParamFileSyntaxError2() && result;
    result = testReader.TestWithParamFileNotFound() && result;

    result = testSimpleDemos.TestSimpleDemo() && result;
    result = testSimpleDemos.TestImportDemo() && result;
    result = testSimpleDemos.TestCheckerRuleDemo() && result;
    result = testSimpleDemos.TestCheckerRuleEgoDemo() && result;

    result = testVersionChecker.TestSuccess() && result;

    result = testFlexInterface.TestExample() && result;

    result = testInjectedParameters.TestNullInjectedParameters() && result;
    result = testInjectedParameters.TestEmptyInjectedParameters() && result;
    result = testInjectedParameters.TestInjectionsForSuccess() && result;
    result = testInjectedParameters.TestWrongFormats() && result;
    result = testInjectedParameters.TestNotDefined() && result;
    result = testInjectedParameters.TestNotDefinedWithNoGlobalParameters() && result;

    result = testWriterApi.TestSimpleSuccess() && result;
    result = testWriterApi.TestParamsSuccess() && result;
    result = testWriterApi.TestBomFile() && result;

    result = testDeprecated.TestDeprecatedSuccess() && result;
    result = testDeprecated.TestDeprecatedSupress() && result;


    result = testAlks.TestCatalogs() && result;
    result = testAlks.TestVariations() && result;

    result = testParametervalidation.TestValidation() && result;
    result = testParametervalidation.TestValidationErrors() && result;

    result = testCardinality.TestEmptyStory() && result;
    result = testCardinality.TestMultipleGroupElements() && result;

    return result;
}
#endif

#ifdef SUPPORT_OSC_1_2
bool TestV1_2(std::string basePath)
{
	NET_ASAM_OPENSCENARIO::v1_2::TestExamples testExamples(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestRangeChecker testRangeChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestFiles testFiles(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestImports testImports(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestReader testReader(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestSimpleDemos testSimpleDemos(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestVersionChecker testVersionChecker(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestFlexInterface testFlexInterface(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestInjectedParameters testInjectedParameters(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestWriterApi testWriterApi(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestDeprecated testDeprecated(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestAlks testAlks(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestParameterValidation testParametervalidation(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestVariableValidation testVariableValidation(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestDeprecatedValidation testDeprecatedValidation(basePath);
	NET_ASAM_OPENSCENARIO::v1_2::TestExamplesOsc testExamplesOsc(basePath);
    NET_ASAM_OPENSCENARIO::v1_2::TestCardinality testCardinality(basePath);

	auto result = true;

	result = testFiles.TestUnicode() && result;

	result = testAlks.TestScenarios() && result;
	result = testInjectedParameters.TestInjectionsForSuccess() && result;
	result = testFiles.TestExpressionsSuccess() && result;
	result = testParametervalidation.TestValidationWrongDataTypes() && result;
	result = testExamples.TestExample() && result;

	result = testRangeChecker.TestParamsFailure() && result;

	result = testFiles.TestMultiChoiceElement() && result;
	result = testFiles.TestSimpleSuccess() && result;
	result = testFiles.TestNonAsciiFilePaths() && result;
	result = testFiles.TestParamsSuccess() && result;

	result = testFiles.TestExpressionsFailure() && result;
	result = testFiles.TestBomFile() && result;
	result = testFiles.TestParamsFailure() && result;
	result = testFiles.TestParamsConversionInfo() && result;
	result = testFiles.TestParamsConversion() && result;
	result = testFiles.TestUnvalidXml() && result;
	result = testFiles.TestUnknownElement() && result;
	result = testFiles.TestWrongAttributes() && result;
	result = testFiles.TestWrongEndElement() && result;
	result = testFiles.TestCustomCommandAction() && result;
	result = testFiles.TestFileNotFound() && result;
	result = testFiles.TestDefaultValues() && result;

	result = testImports.TestImportSuccess() && result;

	result = testImports.TestImportWithParametersSuccess() && result;
	result = testImports.TestImportWithExpressionsSuccess() && result;

	result = testReader.TestImportSuccess() && result;
	result = testReader.TestImportSuccessNonAsciiFile() && result;
	result = testReader.TestDirectorySuccess() && result;
	result = testReader.TestDirectoryPartlySuccess() && result;
	result = testReader.TestFileNotFound() && result;
	result = testReader.TestDirectoryNotFound() && result;
	result = testReader.TestWithErrors() && result;
	result = testReader.TestWrongCommandLine() && result;
	result = testReader.TestWithParamFile() && result;
	result = testReader.TestWithParamFileSyntaxError() && result;
	result = testReader.TestWithParamFileSyntaxError2() && result;
	result = testReader.TestWithParamFileNotFound() && result;

	result = testSimpleDemos.TestSimpleDemo() && result;
	result = testSimpleDemos.TestImportDemo() && result;
	result = testSimpleDemos.TestCheckerRuleDemo() && result;
	result = testSimpleDemos.TestCheckerRuleEgoDemo() && result;

	result = testVersionChecker.TestSuccess() && result;

	result = testFlexInterface.TestExample() && result;

	result = testInjectedParameters.TestNullInjectedParameters() && result;
	result = testInjectedParameters.TestEmptyInjectedParameters() && result;
	result = testInjectedParameters.TestInjectionsForSuccess() && result;
	result = testInjectedParameters.TestWrongFormats() && result;
	result = testInjectedParameters.TestNotDefined() && result;
	result = testInjectedParameters.TestNotDefinedWithNoGlobalParameters() && result;

	result = testWriterApi.TestSimpleSuccess() && result;
	result = testWriterApi.TestParamsSuccess() && result;
	result = testWriterApi.TestBomFile() && result;

	result = testDeprecated.TestDeprecatedSuccess() && result;
	result = testDeprecated.TestDeprecatedSupress() && result;


	result = testAlks.TestCatalogs() && result;
	result = testAlks.TestVariations() && result;

	result = testParametervalidation.TestValidation() && result;
	result = testParametervalidation.TestValidationErrors() && result;
	
	result = testVariableValidation.TestValidation() && result;
	result = testVariableValidation.TestValidationWrongDataTypes() && result;
	result = testVariableValidation.TestVariableNotDefined() && result;
	result = testVariableValidation.TestValidationWrongSetAction() && result;

	result = testDeprecatedValidation.TestValidation() && result;

	result = testExamplesOsc.TestScenarios() && result;

    result = testCardinality.TestEmptyStory() && result;
    result = testCardinality.TestMultipleGroupElements() && result;
	
	return result;
}
#endif




int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

  std::string basePath = ".";
  NET_ASAM_OPENSCENARIO::TestVersionOptionsWithReader testVersionOptionsWithReader(basePath);
	
  auto result = true;
 
	
#ifdef SUPPORT_OSC_1_0
  result = TestV1_0(basePath) && result;
#else
  result = testVersionOptionsWithReader.TestOptionNotSetVersion1_0() && result;
#endif
#ifdef SUPPORT_OSC_1_1
  result = TestV1_1(basePath) && result;
#else
  result = testVersionOptionsWithReader.TestOptionNotSetVersion1_1() && result;
#endif
#ifdef SUPPORT_OSC_1_2
  result = TestV1_2(basePath) && result;
#else
  result = testVersionOptionsWithReader.TestOptionNotSetVersion1_2() && result;
#endif
  if (result)
    return 0;

  return -1;
}
