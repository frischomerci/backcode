  if(keyword == "v") {
            Float extra{1.0f};
            const Vector3 data = extractFloatData<3>(contents, &extra);
            if(!Math::TypeTraits<Float>::equals(extra, 1.0f)) {
                Error() << "Trade::ObjImporter::mesh(): homogeneous coordinates are not supported";
                return Containers::NullOpt;
            }


    } else if(keyword == "vt") {
            Float extra{0.0f};
            const Vector2 data = extractFloatData<2>(contents, &extra);
            if(!Math::TypeTraits<Float>::equals(extra, 0.0f)) {
                Error() << "Trade::ObjImporter::mesh(): 3D texture coordinates are not supported";
                return Containers::NullOpt;
            }

            arrayAppend(textureCoordinates, data);

    } else if(keyword == "p" || keyword == "l" || keyword == "f") {
            const std::vector<std::string> indexTuples = Utility::String::splitWithoutEmptyParts(contents, ' ');
//good
  if(primitive && primitive != MeshPrimitive::Points) {
                    Error() << "Trade::ObjImporter::mesh(): mixed primitive" << *primitive << "and" << MeshPrimitive::Points;
                    return Containers::NullOpt;
                }
