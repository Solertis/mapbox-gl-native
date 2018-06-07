#pragma once

#include <mbgl/util/feature.hpp>
#include <mbgl/util/optional.hpp>

#include <string>
#include <memory>

namespace mbgl {
namespace style {
namespace expression {

class Collator {
public:
    Collator(bool caseSensitive, bool diacriticSensitive, const std::string& locale);
    Collator(bool caseSensitive, bool diacriticSenstive);

    bool operator==(const Collator& other) const;
    
    int compare(const std::string& lhs, const std::string& rhs) const;
    
    const std::string& resolvedLocale() const;
    
    // TODO: This serialization shouldn't ever be used, but since we're part of
    // mbgl::style::expression::Value we're expected to have a serialize()
    mbgl::Value serialize() const;
    
private:
//    bool caseSensitive;
//    bool diacriticSensitive;
//    optional<std::string> locale;
};

} // namespace expression
} // namespace style
} // namespace mbgl
