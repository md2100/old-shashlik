project(dx)

set(dx_SRCS
    ${DALVIK_PATH}/dx/src/com/android/dx/Version.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttAnnotationDefault.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttCode.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttConstantValue.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttDeprecated.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttEnclosingMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttExceptions.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttInnerClasses.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttLineNumberTable.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttLocalVariableTable.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttLocalVariableTypeTable.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttRuntimeInvisibleAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttRuntimeInvisibleParameterAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttRuntimeVisibleAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttRuntimeVisibleParameterAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttSignature.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttSourceFile.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/AttSynthetic.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/BaseAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/BaseAttribute.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/BaseLocalVariables.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/BaseParameterAnnotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/InnerClassList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/attrib/RawAttribute.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/BaseMachine.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/BasicBlocker.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ByteBlock.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ByteBlockList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ByteCatchList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ByteOps.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/BytecodeArray.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ConcreteMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ExecutionStack.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/Frame.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/LineNumberList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/LocalVariableList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/LocalsArray.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/LocalsArraySet.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/Machine.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/Merger.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/OneLocalsArray.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ReturnAddress.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/Ropper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/RopperMachine.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/SimException.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/Simulator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/SwitchList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/code/ValueAwareMachine.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/cst/ConstantPoolParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/cst/ConstantTags.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/AnnotationParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/AttributeFactory.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/AttributeListParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/ClassPathOpener.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/CodeObserver.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/DirectClassFile.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/FieldListParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/MemberListParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/MethodListParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/direct/StdAttributeFactory.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/Attribute.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/AttributeList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/ClassFile.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/Field.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/FieldList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/Member.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/Method.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/MethodList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/ParseException.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/ParseObserver.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdAttributeList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdField.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdFieldList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdMember.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/cf/iface/StdMethodList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/DxConsole.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/UsageException.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/annotool/AnnotationLister.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/annotool/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dexer/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/Args.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/BaseDumper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/BlockDumper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/ClassDumper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/DotDumper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/dump/SsaDumper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/findusages/FindUsages.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/findusages/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/grep/Grep.java
    ${DALVIK_PATH}/dx/src/com/android/dx/command/grep/Main.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/DexOptions.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/cf/AttributeTranslator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/cf/CfOptions.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/cf/CfTranslator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/cf/CodeStatistics.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/cf/OptimizerOptions.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/ArrayData.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/BlockAddresses.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/CatchBuilder.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/CatchHandlerList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/CatchTable.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/CodeAddress.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/CstInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/DalvCode.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/DalvInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/DalvInsnList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/Dop.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/Dops.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/FixedSizeInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/HighRegisterPrefix.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/InsnFormat.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/LocalEnd.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/LocalList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/LocalSnapshot.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/LocalStart.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/OddSpacer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/OutputCollector.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/OutputFinisher.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/PositionList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/RopToDop.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/RopTranslator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/SimpleInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/StdCatchBuilder.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/SwitchData.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/TargetInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/VariableSizeInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/ZeroSizeInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form10t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form10x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form11n.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form11x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form12x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form20t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form21c.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form21h.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form21s.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form21t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form22b.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form22c.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form22s.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form22t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form22x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form23x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form30t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form31c.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form31i.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form31t.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form32x.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form35c.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form3rc.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/Form51l.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/code/form/SpecialFormat.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/AnnotationItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/AnnotationSetItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/AnnotationSetRefItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/AnnotationUtils.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/AnnotationsDirectoryItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/CatchStructs.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ClassDataItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ClassDefItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ClassDefsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/CodeItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/DebugInfoConstants.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/DebugInfoDecoder.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/DebugInfoEncoder.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/DebugInfoItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/DexFile.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/EncodedArrayItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/EncodedField.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/EncodedMember.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/EncodedMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/FieldAnnotationStruct.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/FieldIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/FieldIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/HeaderItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/HeaderSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/IdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/IndexedItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/Item.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ItemType.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MapItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MemberIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MemberIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MethodAnnotationStruct.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MethodIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MethodIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/MixedItemSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/OffsettedItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ParameterAnnotationStruct.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ProtoIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ProtoIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/Section.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/Statistics.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/StringDataItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/StringIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/StringIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/TypeIdItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/TypeIdsSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/TypeListItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/UniformItemSection.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/UniformListItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/dex/file/ValueEncoder.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/CodeReader.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/DexIndexPrinter.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/IndexType.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/OpcodeInfo.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/Opcodes.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/AddressMap.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/BaseCodeCursor.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/CodeCursor.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/CodeInput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/CodeOutput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/DecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/FillArrayDataPayloadDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/FiveRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/FourRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/InstructionCodec.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/OneRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/PackedSwitchPayloadDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/RegisterRangeDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/ShortArrayCodeInput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/ShortArrayCodeOutput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/SparseSwitchPayloadDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/ThreeRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/TwoRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/io/instructions/ZeroRegisterDecodedInstruction.java
    ${DALVIK_PATH}/dx/src/com/android/dx/merge/CollisionPolicy.java
    ${DALVIK_PATH}/dx/src/com/android/dx/merge/DexMerger.java
    ${DALVIK_PATH}/dx/src/com/android/dx/merge/IndexMap.java
    ${DALVIK_PATH}/dx/src/com/android/dx/merge/InstructionTransformer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/merge/SortableType.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/annotation/Annotation.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/annotation/AnnotationVisibility.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/annotation/Annotations.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/annotation/AnnotationsList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/annotation/NameValuePair.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/AccessFlags.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/BasicBlock.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/BasicBlockList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/ConservativeTranslationAdvice.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/CstInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/DexTranslationAdvice.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/Exceptions.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/FillArrayDataInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/Insn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/InsnList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/LocalItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/LocalVariableExtractor.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/LocalVariableInfo.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/PlainCstInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/PlainInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/RegOps.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/RegisterSpec.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/RegisterSpecList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/RegisterSpecSet.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/Rop.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/RopMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/Rops.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/SourcePosition.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/SwitchInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/ThrowingCstInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/ThrowingInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/code/TranslationAdvice.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/Constant.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/ConstantPool.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstAnnotation.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstArray.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstBaseMethodRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstBoolean.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstByte.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstChar.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstDouble.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstEnumRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstFieldRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstFloat.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstInteger.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstInterfaceMethodRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstKnownNull.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstLiteral32.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstLiteral64.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstLiteralBits.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstLong.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstMemberRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstMethodRef.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstNat.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstShort.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstString.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/CstType.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/StdConstantPool.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/TypedConstant.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/cst/Zeroes.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/package-info.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/type/Prototype.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/type/StdTypeList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/type/Type.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/type/TypeBearer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/rop/type/TypeList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/BasicRegisterMapper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/ConstCollector.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/DeadCodeRemover.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/DomFront.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/Dominators.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/EscapeAnalysis.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/InterferenceRegisterMapper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/LiteralOpUpgrader.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/LocalVariableExtractor.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/LocalVariableInfo.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/MoveParamCombiner.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/NormalSsaInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/Optimizer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/PhiInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/PhiTypeResolver.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/RegisterMapper.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SCCP.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SetFactory.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SsaBasicBlock.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SsaConverter.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SsaInsn.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SsaMethod.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/SsaRenamer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/FirstFitAllocator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/FirstFitLocalCombiningAllocator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/IdenticalBlockCombiner.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/InterferenceGraph.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/LivenessAnalyzer.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/NullRegisterAllocator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/RegisterAllocator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/back/SsaToRop.java
    ${DALVIK_PATH}/dx/src/com/android/dx/ssa/package-info.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/AnnotatedOutput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/BitIntSet.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/Bits.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/ByteArray.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/ByteArrayAnnotatedOutput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/FixedSizeList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/Hex.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/HexParser.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/IndentingWriter.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/IntIterator.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/IntList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/IntSet.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/LabeledItem.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/LabeledList.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/ListIntSet.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/MutabilityControl.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/MutabilityException.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/Output.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/ToHuman.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/TwoColumnOutput.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/Warning.java
    ${DALVIK_PATH}/dx/src/com/android/dx/util/Writers.java
)

set(dx-dex_SRCS
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/Annotation.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/ClassData.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/ClassDef.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/Code.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/Dex.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/DexException.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/DexFormat.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/EncodedValue.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/EncodedValueCodec.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/EncodedValueReader.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/FieldId.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/Leb128.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/MethodId.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/Mutf8.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/ProtoId.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/SizeOf.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/TableOfContents.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/TypeList.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/ByteArrayByteInput.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/ByteInput.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/ByteOutput.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/ExceptionWithContext.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/FileUtils.java
    ${ANDROID_LIBCORE_PATH}/dex/src/main/java/com/android/dex/util/Unsigned.java
)

add_jar(dx
    SOURCES ${dx_SRCS} ${dx-dex_SRCS}
    MANIFEST ${DALVIK_PATH}/dx/etc/manifest.txt
)

install_jar(dx ${ANDROID_BIN_DIR})
install(PROGRAMS ${DALVIK_PATH}/dx/etc/dx DESTINATION ${ANDROID_BIN_DIR})
