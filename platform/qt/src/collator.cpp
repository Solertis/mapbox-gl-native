#include <mbgl/style/expression/collator.hpp>

// TODO: This is the Collator implementation for Qt when WITH_QT_I18N flag is set
// ie we can't link directly to ICU. Since Qt doesn't expose what we need to implement
// Collator, we have to figure out what to do here (maybe pass through to default string
// comparison?)

namespace mbgl {
namespace style {
namespace expression {

Collator::Collator(bool , bool , const std::string& )
    {}

Collator::Collator(bool , bool )
    {}

bool Collator::operator==(const Collator& ) const {
    return true;
}

int Collator::compare(const std::string&, const std::string&) const {
    return 0;
}

const std::string& Collator::resolvedLocale() const {
    static std::string placeholder;
    return placeholder;
}
mbgl::Value Collator::serialize() const {
    return mbgl::Value(true);
}


} // namespace expression
} // namespace style
} // namespace mbgl
